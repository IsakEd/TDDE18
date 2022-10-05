

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
}




std::string toString(Time const& time)
{
	Time temp(time);
	string hour;
	string minute;
	string second;

	if (temp.HH < 10) {
		hour = "0";
	}
	if (temp.MM < 10) {
		minute = "0";
	}
	if (temp.SS < 10) {
		second = "0";
	}
		
	
	return hour + to_string(temp.HH) + ":" + minute + to_string(temp.MM) + ":" + second +  to_string(temp.SS);
}

Time operator+(Time time, int a)
{
	
	int add = a;
    
	if(time.SS + add > 59){
		time.SS = (time.SS + add)%60; //65 ska ge 5, 127 ska ge 7
		time.MM += add/60;
		time.HH += add/3600;
	}
	else {
		time.SS += add;
	}
	return time;
}

Time operator-(Time time, int a)
{
	return time + (-a);
}

Time operator++(Time time, int)
{
	time = time + 1;

	return time;
}
Time& operator++(Time &time)
{
	time = time + 1;
	return time;
}
Time operator--(Time time, int)
{
	time = time - 1;
	return time;
	
}

Time& operator--(Time& time)
{
	time = time - 1;
	return time;
	
}

bool operator==(Time const& time1, Time const& time2) {
	if (toString(time1) == toString(time2)) {

		return true;
	}else {
		return false;
	}
}
bool operator!=(Time const& time1, Time const& time2) {
	if (time1 == time2) {

		return false;
	}else {
		return true;
	}
}

bool operator<(Time const& time1, Time const& time2) {

	if (time1.HH < time2.HH ) {   // 21.35.40 & 21.40.30
       return true;
	}else if (time1.HH == time2.HH)  {
		if (time1.MM < time2.MM){
			return true;
		} else if (time1.MM == time2.MM){
			if (time1.SS < time2.SS) {
				return true;
			}
		}

	}
	return false;
}
bool operator>(Time const& time1, Time const& time2) {
	if (!(time1 < time2) & (time1 != time2)) {
		return true;
	}else {
		return false;
	}
}

istream& operator>>(istream& is, Time& time )
{
	

	char colon{};
	is >> time.HH >> colon >> time.MM >> colon >> time.SS;
	if (is_valid(time)) {
	return is;
	}
	is.setstate(std::ios::failbit);
	return is;
	

	
}
ostream& operator<<(ostream& os, Time const& time) {

	
	os << time.HH << ':' << time.MM << ':' << time.SS;
	
	return os;
} 


