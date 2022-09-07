// Labb 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number{};
    cout << "Enter one integer: ";
    cin >> number_s1;
    cout << "You entered: " << number_s1 << endl;
    cout << "\n";
    ///////////////////////////////////////////////////
    int num1_s2;
    int num2_s2;
    int num3_s2;
    int num4_s2;

    cout << "Enter four integers: "; // Behöver fixa så inte skit ligger kvar i buffern
    cin >> num1_s2 >> num2_s2 >> num3_s2 >> num4_s2;
    cout << "You entered: " << num1_s2 << " " << num2_s2 << " " << num3_s2 << " " << num4_s2 << endl;
    cout << "\n";
    ///////////////////////////////////////////////////

    float real;
    cout << "Enter one integer and one real number: ";
    cin >> int_s3 >> real_s3;
    cout << "The real is: " << real_s3 << endl;
    cout << "The integer is: " << int_s3 << endl;
    cout << "\n";
    /////////////////////////////////////////////////////
    cout << "Enter one real and one integer number: ";
    cin >> real_s4 >> int_s4;
    cout << "The real is: " << real_s4 << endl;
    cout << "The integer is: " << int_s4 << endl;

    ///////////////////////////////////////////////////////
    char character;
    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered: " << character << endl;
    cout << "\n";
    ///////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////

    cout << "Enter a word: " << endl;
    cin >> str_s6;
    int len_s6 = str_s6.length();
    cout << "You entered '" << str_s6 << "'" << endl;
    cout << "The word '" << str_s6 << "'"
         << " has " << len_s6 << " characters." << endl;
    cout << "\n";
    ///////////////////////////////////////////////////////

    int int_s7;
    string str_s7;
    cout << "Enter an integer and a word: ";
    cin >> int_s7 >> str_s7;
    cout << "You entered: '" << int_s7 << "' and '" << str_s7 << "'" << endl;
    cout << "\n";
    ///////////////////////////////////////////////////////

    string word_s8;
    cout << "Enter an character and a word: ";
    cin >> character_s8 >> word_s8;
    cout << "You entered the string '" << word_s8 << "' and the character '" << character_s8 << "'." << endl;
    cout << "\n";
    ///////////////////////////////////////////////////////

    cout << "Enter a word and real number: " << endl;
    cin >> word_s9 >> number_s9;
    cout << "You entered '" << word_s9 << "' and '" << number_s9 << "'." << endl;
    cout << "\n";
    ///////////////////////////////////////////////////////

    cout << "Enter a text-line: ";
    getline(cin, line_s10);
    cout << "You entered: " << line_s10 << endl;

    ///////////////////////////////////////////////////////

    cout << "Enter a second line of text: ";
    getline(cin, line_s11);
    cout << "You entered: \"" << line_s11 << "\"" << endl;

    ///////////////////////////////////////////////////////
    cout << "Enter three words: ";
    cin >> word1_s12 >> word2_s12 >> word3_s12;
    cout << "You entered: '" << word1_s12 << " " << word2_s12 << " " << word3_s12 << "'" << endl;

    return 0;
}