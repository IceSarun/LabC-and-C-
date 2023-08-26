#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{

private:
    int hour;
    int minute;
    int second;


public:
    Time(int hour, int minute, int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
        
    }
    Time(int duration){
        this->hour=duration/3600%24;
        this->minute=(duration%3600)/60;
        this->second=duration%(60);
	}
	int	getDuration(){
	    int timeto;
		timeto=second+(hour*pow(60,2))+(minute*60);
		return  timeto;
	}
	int getHour(){
	    return hour;
	}
	int getMinute(){
	    return minute;
	}
	int getSecond(){
	    return second;
	}
	
	Time add(Time other){
	     Time anser(0);
	     int duration,tim,timee;
	     tim = second+(hour*pow(60,2))+(minute*60);
	     timee = other.getDuration();
	     duration = tim+timee;
	     anser.hour = duration/(60*60)%24 ;
	     anser.minute = (duration%3600)/(60);
	     anser.second = duration % 60 ;
	     return anser;
	}

	int	subtract(Time other){
	     int duration,tim,timee;
	     tim = second+(hour*pow(60,2))+(minute*60);
	     timee = other.getDuration();
	     duration = tim-timee;
	     if(duration<0){
	         duration=(24*3600)+duration;
	     }
	     return duration;
	}
	int	equals(Time other){
	    int duration,tim,timee;
	    tim=second+(hour*pow(60,2))+(minute*60);
	    timee=other.getDuration();
	    if(tim==timee){
	        return 1;
	    }
	    else if(tim!=timee){
	        return 0;
	    }
	}
	
	string toString(){
	    
	    string ss;
	    if(hour<10){
	        ss=to_string(0)+to_string(hour)+":";

	    }
	    else if(hour>=10){
	        ss=to_string(hour)+":";
	    }
	
	    if(minute<10){
	        ss=ss+to_string(0)+to_string(minute)+":";
	    }
	    else if(minute>=10){
	        ss=ss+to_string(minute)+":";
	    }
	    if(second<10){
	        ss=ss+to_string(0)+to_string(second);
	    }
	    else if(second>=10){
	        ss=ss+to_string(second);
	    }
           
        return ss;
	
	}
	// string toString(){
	    
	//     stringstream ss;
	//     if(hour<10){
	//         ss<<"0"<<hour;
	//     }
	//     else if(hour>=10){
	//         ss<<hour;
	//     }
	//     ss<<":";
	//     if(minute<10){
	//         ss<<"0"<<minute;
	//     }
	//     else if(minute>=10){
	//         ss<<minute;
	//     }
	//     ss<<":";
	//     if(second<10){
	//         ss<<"0"<<second;
	//     }
	//     else if(second>=10){
	//         ss<<second;
	//     }
           
    //     return ss.str();
	
	// }

};
int main()
{
  Time a(02,02,02);
  Time b(1,1,1);
  Time c(18960);
  
  cout<<a.subtract(b)<< endl <<a.equals(b)<< endl ;
  cout<<a.toString()<<endl<<b.toString()<< endl ;
  cout<<c.toString()<< endl;
  cout<<c.getDuration()<<endl;
  cout<< b.subtract(a) << endl;
  Time v=a.add(b);
  cout << v.getDuration();


}





