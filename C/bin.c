#include <stdio.h>
int main(){
    int num;
    int bin[100];
    int i=0, j;
    printf("number = ");     
    scanf("%d", &num);
     
    while(num>0)
    {
        bin[i]=num%2;
        num=num/2;
        i++;
    }

    printf("answer = " );
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);   
    }
}