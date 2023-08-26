
#include "TA.h"
#include "Teacher.h"
#include <iostream>
#include "Student.h"
//ตัดออก 1 class
TA::TA(string name,string id): Teacher(name)
{

}
string TA::getid(){
    return id;
}