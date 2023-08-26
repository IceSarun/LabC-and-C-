#include <iostream>
using namespace std;

int main() {
    int a;
    std :: cin >> a;
    std :: cout << a ; //แสดงผลออกทาง output
    std :: cout << "hello"
                <<  endl;// emd line
    std :: cout << 300 ;


    int b;
    cin >> b;
    cout << a ; //แสดงผลออกทาง output
    cout << "hello"
                <<  endl;// emd line
    cout << 400 ;


    string name;
    int number;
    cin >> name >> number;

    number*=2;

    cout << "---------------------" << endl;
    cout << "HEllO" << name
    << endl
    << number;

    //  char str[30];
    //  sprintf(str," %.2lf",sum);
    //  cout<< Name << str << endl;




    return 0;
}