#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
            // printf("ab[%d]=%d ab[%d]=%d\n",i,a[i],j,a[j]);
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            // printf("a[%d]=%d a[%d]=%d\n",i,a[i],j,a[j]);
           
        }
        }
        printf("%d\n",a[i]);
    }
    
}