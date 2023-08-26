#include <stdio.h>
#include <string.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

void reportStock(char *filename)
{
    FILE *stock_log;
    char content[100], name[30], *token;
    int n, i, amount, last = 0;
    double c;
    stock_log = fopen(filename, "r");
    fscanf(stock_log, "%d\n", &n);
    Product stock[n];


    for (i = 0; i < n; i++)
        stock[i].amount = stock[i].totalCost = 0;
    while (fgets(content, 100, stock_log))
    {
        token = strtok(content, ","); 
        token = strtok(NULL, ","); 
        token = strtok(NULL, ",");
        strcpy(name, token);

        token = strtok(NULL, ",");
        sscanf(token, "%d", &amount);

        token = strtok(NULL, ",");
        sscanf(token, "%lf", &c);

        for (i = 0; i < last; i++)
            if (!strcmp(name, stock[i].name))
                break;

        if (i == last) {
            strcpy(stock[i].name, name);
            last++;
        }
        stock[i].amount += amount;
        stock[i].totalCost += c;
    }
    fclose(stock_log);

    printStock(stock, n);
}


int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    reportStock(filename);
}