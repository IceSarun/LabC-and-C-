#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "TA.h"
using namespace std;

int main(){
   Person *p1=new Person("Alice");
    cout<<"Student Name: "<<p1->getName()<<endl;
    
    p1->setName("Alice in");
    cout<< p1->getName()<<endl;

    Student *s1=new Student ("BOB","6410406878");
    s1->addScore(30);
    cout<< s1->getName() << endl;
    cout<< s1->getScores() << endl;

    cout<<"---------------------"<<endl;
   
    Teacher *t1=new Teacher ("B");

    t1->giveScores(s1,35.56);
    cout<< t1->getName() << endl;
   
    cout<<"---------------------"<<endl;

    TA *ta1=new TA("Tew","6410406878");
    ta1->getName();
    


    cout<<"---------------------"<<endl;
    Person* people[10];
    people[0]=p1;
    people[1]=s1;
    people[2]=t1;//sub is a sup
    people[3]=ta1;
    people[4]=new Person("Person A");
    people[2]=new Student("Student B","123456789");

    for(int i=0; i<6 ;i++){
        cout<<people[i]->getName()<<endl;
    }

    Teacher* teachers[10];
    teachers[0] = t1;
    teachers[1]=ta1;
    // teachers[2] = people[2];


}