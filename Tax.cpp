// Tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;



int main()
{

	float first;
	float second;
	float stride;
	float tax;

	cout << "INPUT PART"; cout << "\n=========";


	cout << "\nEnter first price: "; cin >> first;
	while (first < 0 || first > 100000) {
		if (first < 0) {
			cout << "ERROR: First price must be at least 0 (zero)SEK" << "\nEnter first price: ";
			cin >> first;
		}
		else if (first > 100000) {
			cout << "ERROR: First price cant be more than 100000 (A hundred thousand)SEK" << "\nEnter first price: ";
			cin >> first;

		}
	}
	cout << "Enter second price: "; cin >> second;
	while (second < 0 || second > 100000 || second < first) {
		if (second < 0 || second < first) {
			cout << "ERROR: Second price must be at least 0 (zero)SEK and cant be less than the first price" << "\nEnter Second price: ";
			cin >> second;
		}
		else if (second > 100000) {
			cout << "ERROR: second price cant be more than 100000 (A hundred thousand)SEK" << "\nEnter second price: ";
			cin >> second;

		}
	}
	cout << "Enter stride: "; cin >> stride;
	while (stride <= 0 || stride > (second - first)){
		if (stride <= 0) {
			cout << "Stride must be at least 0.01" << "\nEnter Stride: ";
			cin >> stride;
		}
		else if (stride > (second - first)) {
			cout << "Stride must be less than the difference between first and second price" << "\nEnter Stride: ";
			cin >> stride;

		}
	}
	cout << "Enter tax percent: "; cin >> tax;
	while (tax <= 0 || tax > 100) {
		if (tax <= 0) {
			cout << "Tax cant be less than 0.01 percent" << "\nEnter tax percent: ";
			cin >> tax;
		}
		else if (tax > 100) {
			cout << "Tax cant be more than 100 percent" << "\nEnter tax percent: ";
			cin >> tax;

		}
	}
	
	cout << endl;


	cout << "TAX TABLE"; cout << "\n=========";
	printf("\n       Price         Tax         Price with tax");
	cout << "\n-----------------------------------------------";

	//for (int i = 0; i <= second; i ++) 
	 while (first <= second) {
		
		printf("\n       %.2f         %.2f                 %.2f", first, first * (tax/100.0) , first + (first *(tax/100.0))); 
		first = first + stride;

		
	}




}

