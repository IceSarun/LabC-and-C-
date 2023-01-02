#include <stdio.h>

// Pass by refer && pointer 
void printstring(char *s){
    for (char*p=s;*p!='\0';p++){
        printf("%p = %c\n",p,*p);
    }

}

void printarray(int *i,int size){
    for (int *j=0; j<(i+size); j+=1){ // ระวังขนาด เพราะ j +ตามint
        printf("%p = %c\n",j,*j); 
    }

}

int main() {

char s[100];
int d[10]={1,2,3,4,5,6,7,8,9,10};
scanf("%s",&s[0]);
printstring(&s[0]);
printarray(d,10);

//   int x=100;
//   printf("value = %d\n",x);
//   //printf("reference = %lu\n",&x);
//   printf("reference = %p\n",&x);  // %p = เก็บaddress
//   // เปลี่ยนเลข address ใน memory ไม่ได้
//   // กำหนด &x=1000; ไม่ได้

//   int data[100]={10,20,40,50,30};
//   printf("value of data =%d\n",data[0]);
//   printf("refer of data =%p\n",&data[0]);
//   printf("refer of data =%p\n",data);
// // เก็บแค่ address แรกก็เพียงพอ เพราะเราสามารถหา address ตัวต่อไปได้ เช่น data[5]=adressแรก + 5*(ประเภทของตัวแปรที่ใช้เก็บข้อมูล)

//    printf("value of data =%d\n",data[4]);
//   printf("refer of data =%p\n",&data[4]);

// // printf("value of data =%d\n",data[100]);
// // printf("refer of data =%p\n",&data[100]); // warning 

//   data[100]=300;
//     printf("value of data =%d\n",data[100]);
//   printf("refer of data =%p\n",&data[100]);
// // pointer สามารถเปลี่ยนค่าไหนก็ได้ = อันตราย


// int data[100]={10,20,40,50,30};
// int x=100;

// int *ptr=&x; // เวลาประกาศต้องมี * 
// int *arrPtr; 
// arrPtr =data; // การกำหนดค่าไม่ต้องมี * แล้ว ยกเว้นจะทำการ dereferencing เพื่อเปลี่ยนค่า

// printf("value of data =%d\n",ptr);
// printf("refer of data =%p\n",&ptr);
// // dereferencing
// printf("refer of data =%d\n",*ptr); //เอาค่าของตัวแปรที่เก็บข้อมูลมาแสดง(ที่มีdatatypeเดียวกัน)


// int x;
// char s[100];
// scanf("%d %s",&x,s);// จำเป็นต้องใส่ข้อมูลตามลำดับเท่านั้น

// printf("resualt - %d , %s",x,s); 


// char s[100];
// char c;
// scanf("%d",&x);
// scanf("\n%c",&c); //ระวังเรื่อง enter เพราะนับเป็นcharด้วยเหมือนกัน 

// printf("resualt - %d , %c",x,c); 


}