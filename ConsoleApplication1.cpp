// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()



{
    int a;
    std::string b;
    double c;
    char d;


    cout << "\nEnter one integer: ";
    cin >> a;
    std::cout << "You entered the number: " ;
    std::cout << a;
    cin.ignore(1000, '\n');
   

    std::cout << "\nEnter four integers: ";
    std::cin >> a;
    std::cout << "You entered the numbers: " << a;
    std::cin >> a;
    std::cout << " " <<  a;
    std::cin >> a;
    std::cout << " " << a;
    std::cin >> a;
    std::cout << " " << a;
    cin.ignore(1000, '\n');

    cout << "\nEnter one integer and on real number:";
    cin >> a;
    cin >> c;

    cout << "The real is: " << right << setfill(' ') << setw(20) << setprecision(4) << c << endl;
    cout << "\nThe integer is: " << right << setfill(' ') << setw(20) << a << endl << flush;
    cin.ignore(1000, '\n');



    cout << "\nEnter one real and on integer number:";
    cin >> c;
    cin >> a;

    cout << "The real is: " << right << setfill('.') << setw (20) << setprecision(4) <<  c <<endl;
    cout << "\nThe integer is: " << right << setfill('.') << setw(20) << a << endl << flush;
    cin.ignore(1000, '\n');

    cout << "\nEnter a character: ";
    cin >> d;
    cout << "\nYou entered: " << d;
    cin.ignore(1000, '\n');

    cout << "\nEnter a word: ";
    cin >> b;
    cout << "The word '" << b << "' has " << b.size() << " character(s)." << endl << flush;
    cin.ignore(1000, '\n');

    cout << "Enter an integer and a word: ";
    cin >> a;
    cin >> b;
    cout << "\nYou entered '" << a << "'" << "and '" << b << "'." << endl << flush;
    cin.ignore(1000, '\n');
    
    cout << "Enter a character and a word: ";
    cin >> d;
    cin >> b;
    printf("You entered the string '%s' and the character '%c' ", b.c_str(), d);  cout << endl << flush;
    cin.ignore(1000, '\n');

    cout << "Enter a word and real number: ";
    cin >> b;
    cin >> c;
    printf("You entered  \"%s\" and \"%.3f\".", b.c_str(), c); cout << endl;
    cin.ignore(1000, '\n');

    cout << "Enter a text-line: ";
    getline(cin, b, '\n');
    printf("You entered: \"%s\".", b.c_str()); cout << endl;
    //cin.ignore(1000, '\n');

    cout << "Enter a second line of text: ";
    getline(cin, b, '\n');
    printf("You entered: \"%s\".", b.c_str()); cout << endl;
    //cin.ignore(1000, '\n');

    cout << "Enter three words: ";
    cin >> b;
    cout << " You entered:  '" << b << " ";
    cin >> b;
    cout << b << " ";
    cin >> b ;
    cout << b << "'" << endl << flush;
    cin.ignore(1000, '\n');



















    


    

 
  
    

   
    
    
    

    

    
   
}


