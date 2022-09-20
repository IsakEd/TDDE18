


#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

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

std::string toString(const Time time)
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



istream& operator>>(istream& is, const Time &time )
{
	

	Time temp(time);
	is >> temp.HH >>  temp.MM >>  temp.SS;
	return is;

	
}
ostream& operator<<(ostream& os, const Time& time) {

	

	Time temp(time);
	os << temp.HH <<  temp.MM  << temp.SS;
	return os;
} 


int main()


{
	Time t{20,15,15};
	
	if (is_valid(t)) {
		
		std ::cout << toString(t) << endl;

	}
	else {
		std ::cout << "Error";
	}
	

	std::cout << toString(t + 5) << endl;
	std::cout << toString(t - 5) << endl;

	t++;

	std::cout << toString(t) << endl;

	--t;

	std::cout << toString(t) << endl;
	
}

