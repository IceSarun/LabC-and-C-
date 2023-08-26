#include <iostream>
using namespace std;

class Transportation
{
public:
  virtual double
   fare() = 0;
};

class Taxi
:public Transportation
{
private:
    double distance;
public:
    virtual double fare(){
        double fare;
        fare=35+(distance*2);
        return fare;
    }
    void setDistance(double distance){
        this->distance=distance;
    }

};

class BmtaBus
: public Transportation
{
public:
    virtual double fare(){
        double fare;
        fare=6.50;
        return fare;
    }

};

class BTS
: public Transportation

{
private:
    int station;
public:
    virtual double fare(){
        int fare;
        fare=15+(station*5);
        return fare;
    }
    void setStation(int station ){
      this->station=station;}

};

class Passenger
{
private:
    double total;
public:
    Passenger(){
        total=0;
    }
    double getTotalFare() {
        return total;
    }
    void addTransportation(Transportation &transport){ // รับเป็น reference ใช้ . เข้าถึง function
       total=total+transport.fare();
    }

};

int main()
{
    Passenger passenger;// name ใช้ . ธรรมดา
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi(); // pointer ต้องใช้ -> ในการชี้
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi); 

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            
bts->setStation(station);
passenger.addTransportation(*bts );

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}