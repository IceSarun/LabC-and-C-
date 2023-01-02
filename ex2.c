#include <stdio.h>
#include <stdlib.h>

int* make_it(int n, int d)
{
        int c,i=1;
    for(i=1;i<=n;i++){
        if(i%d==0){
            c++;
        }
    }
    int ans[c];
    int num=0;
    for(i=1;i<=c;i++){
        if(i%d==0){
            ans[num]=i;
            num++;
        }
    }
    return *ans;
}

void print_array(int* array, int size);

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int* array = make_it(n, d);
    print_array(array, n / d);
}

void print_array(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%d,", array[i]);
    }
}
