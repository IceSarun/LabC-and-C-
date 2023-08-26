#ifndef TA_H
#define TA_H
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Person.h"

class TA : public Teacher{
private:
    string id;

 

public:
    TA(string,string);
    string getid();

};
 #endif