#include <iostream>
using namespace std;

typedef struct S___{
    string name;
    double score;

} StudentStruct;


void setStudentName(StudentStruct* student,string name){
    student->name=name;
}
void addStudentName(StudentStruct* student,double score){
    student->score+=score>0? score:0;
}
//-------------------
// OOP is A PIE
class Student{
    private: // attributes, data members
        string name;
        double score;
    public:// methods, member functions
        Student(string name){
            this->name=name;
            score=0;
        }   
        void setName(string name){

            this->name=name;
        }
        void addScore(double score){
            if (score>0){
            this->score+=score;
            }
        }
        string getName(){
            return name;
        }
        double getScore(){
            return score;
        }

        string toString(){
            return "name"+ name + to_string(score);
        }

};

int main(){

    StudentStruct s1;            
    setStudentName(&s1,"Peter");     
    s1.score=30;
    addStudentName(&s1,36.5);


    Student s2("Tom"),s3("Rom");
    // s2.name="Tony"; เข้าถึงไม่ได้
    // s2.setName("Tony");
    // // s3.setName2();
    // s3.setName("Ton");
    s2.addScore(78);
    s3.addScore(56);
    s3.addScore(44);

    Student* students[10];
    students[0]=&s2;
    students[1]=&s3;
    


    cout<<"s1"<<s1.name<<" : "<< s1.score<< endl;
    cout<<"s2"<<s2.getName()<< " : " << s3.getScore() << endl;
    return 0;
}
