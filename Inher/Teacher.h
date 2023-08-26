#include <iostream>
#include "Student.h"
#include "Person.h"
#ifndef TEACHER_H
#define TEACHER_H
using namespace std;

class Teacher : public Person{
private:

public:
    Teacher(string);
    void giveScores(Student*,double);
    void giveScores(Student,double);
 };
 #endif