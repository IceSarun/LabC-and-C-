#include <stdio.h>

// รูปแบบของฟังก์ชัน 
//void 
//ReturnType Functionname(parameter)
//{
//statement
//return .....;

//}


int add(int x); // สามารถทำเป็น header แบบนี้ได้

int main()
{
int x=200;
int y=add(x);
printf("newy=%d\n",y);
//int d=34.5 มีปัญหา underflow 
//int d= (int)34.5; // complie pass
}


int  add(int x)
{
    printf("x=%d\n",x);
    x+=1;
    printf("afterx=%d\n",x);
    return x;
}




 int k, l ; //ตัวแปรglobal กำหนดค่า 0 อัตโนมัติ
    int main() {
       int i = 0; //กำหนดค่าตัวแปรด้วย ไม่เช่นนั้นจะได้ค่าแปลก
      printf("%d %d %d\n",k,l,i);
      while (i<10){
       printf("%d\n",i);
       i++;
    }
   //  1=True,0=Flase
   //  while (1){
   //    printf("%d\n",i); //i++; infinity แก้โดย interupt(กด ctrl c)
   //    break;
   //  }

   //  for (int i=0;i<10;i++){printf("%d\n",i);}
    
   //  กด ctrl / เพื่อกำกับ// ทุกประโยคที่ลากคลุม

   //  for (;;i++){printf("%d\n",i);break;}}
