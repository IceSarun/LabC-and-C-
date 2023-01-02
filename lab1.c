#include <stdio.h>

// ประเภทของตัวแปรต่างๆ
int a=10;
double b =12.5;
unsigned int c = 1000;
char d ='A'; //65
char name[]="ice";

int main()
{
    a=a+d;
    int ch='A'+10;
    printf("Hello World!");
    
    //วิธีการ printf ให้ตรงกับประเภทของตัวแปรที่เรากำหนด
    printf("a=%d, b=%lf\n",a,b);
    printf("c=%u, d=%c\n",c,d);
    printf("ch= %d",ch);

    int e=1/2;
    float r=1/2;
    printf("e=%d, r=%f",e,r);

    int t=9%20;
    printf("t=%d",t);

    printf("name=%s",name);


}