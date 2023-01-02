#include <stdio.h>
#include <string.h>
// การประกาศ Structure
//   ประกาศก่อน main

// struct Student{
//     //Member definition
//     char name[30];
//     char id[10];
// }


// typedef int cm;
typedef struct{
    char name[100];
    double  score;
}Student;

void print_stu(Student student){
    printf("Name: %s \n",student.name);
    printf("Score: %.2lf",student.score);

}
void add_score(Student* student,double score){
    student-> score+=score;


}



// int main() {
// struct Student student1, student2;;
// }


int main(){
    int length=10;
    printf("%d\n",length);
    Student student1; // name
    Student *sPtr; // pointer

    student1.score=100;
    // student1.name="Peter"; //ทำไม่ได้ ปกติเราจะ assign ค่า string ไม่ได้อยู่แล้ว
    strcpy(student1.name,'Peter'); // ทำได้
    sPtr=&student1; 
    sPtr-> score=5;// -> ใช้เข้าถึง
 
    add_score(&student1,100);
    add_score(sPtr,100);

    print_student(student1);
    print_student(*sPtr);

    Student students[2];
    strcpy(students[0].name,"IceSarun");
    students[0].score=10;

    strcpy(students[1].name,"Ge");
    students[1].score=12;

    for (int i=0;i<2;++i){
        print_student(students[i]);
    }
    // for (Student*s=0;<2;++i){
    //     add_score
    // }
    return 0;
}

//ex.lab
// #include <stdio.h>

// #define ARRAY_SIZE 5
// typedef struct
//  {
//   char id[12];
//   int midterm;
//   int final;
//   char grade;
// }
// StudentRecord;


// void findTop(StudentRecord pRec[], int size, StudentRecord **topMid, StudentRecord **topFin) {

  
//   int i=0;
//   *topMid=pRec;
//   *topFin=pRec;

//   for (i = 1; i < size ; i++)
//     {
//             if (pRec[i].midterm>(*topMid)->midterm)
//             {
//                 *topMid=&pRec[i];
//             } 

//     }


//   for (i = 1; i< size ; i++)
//     {          
//             if (pRec[i].final>(*topFin)->final)
//             {
//                 *topFin=&pRec[i];
//             } 

    
//     }


// }