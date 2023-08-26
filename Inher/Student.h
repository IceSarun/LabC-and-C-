#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

using namespace std;

class Student : public Person{
private:
    // string name;
    string id;
    double score;
 

public:
    Student(string,string);
    // string getName();
    double getScores();
    // void setName (string);
    void addScore(double);

};
#endif