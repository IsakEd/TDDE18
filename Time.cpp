

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include "time.h"

using namespace std;

bool is_valid(const Time time) {

	if (time.HH < 0 || time.HH > 23) {

		return false;
	}
	else if (time.MM < 0 || time.MM > 59) {
		
		return false;
	}
	else if (time.SS < 0 || time.SS > 59) {

		return false;
	}
	else {
		return true;
	}

 

}




bool is_am(const Time time) 
{   
    if (time.HH < 12){
        return true;
    };
    return false;
};




std::string toString(const Time& time)
{
	Time temp(time);
	return to_string(temp.HH) + ":" + to_string(temp.MM) + ":" + to_string(temp.SS);
}

Time& operator+(Time& time, int a)
{
	
	int add = a;
    
	time.SS = time.SS + add;

	return time;
}

Time& operator-(Time& time, int a)
{
	
	int sub = a;

	time.SS = time.SS - sub;

	return time;
}

Time& operator++(Time& time, int noll)
{
	Time temp{ time.HH, time.MM, (time.SS + 1) };
	time = temp;
	return time;
}

Time& operator--(Time& time)
{
	Time temp{ time.HH, time.MM, (time.SS - 1) };
	time = temp;
	return time;
	
}

bool operator==(Time const& time1, Time const& time2) {
	if (toString(time1) == toString(time2)) {

		return true;
	}else {
		return false;
	}
}

bool operator<(Time& time1, Time& time2) {

	if (time1.HH < time2.HH ) {
       return true;
	}else{

		return false;
	}


}


istream& operator>>(istream& is, const Time &time )
{
	

	Time temp(time);
	is >> temp.HH >>  temp.MM >>  temp.SS;
	return is;

	
}
ostream& operator<<(ostream& os, const Time& time) {

	//char colon = ':';
	os << time.HH << ':' << time.MM << ':' << time.SS;
	
	return os;
} 


