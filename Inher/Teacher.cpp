#include "Teacher.h"
#include <iostream>
#include "Student.h"

Teacher::Teacher(string name): Person(name){

}


void Teacher:: giveScores(Student *student,double score){
    student->addScore(score);
}
void Teacher:: giveScores(Student student,double score){
    student.addScore(score);
}