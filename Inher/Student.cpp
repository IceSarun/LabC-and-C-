#include "Student.h"


// :: scope resolution operator
Student:: Student (string name,string id):Person(name)
{
    this->id=id;
    score=0;
}



double Student:: getScores (){
    return score;
}


void Student::addScore(double score){
    this->score+=score;
}