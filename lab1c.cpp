#include <iostream>
using namespace std;
#include <fstream>
#include <string>
using std::ifstream;

int main()
{
    int numberOfWords = 1;
    string longestWord;
    string shortestWord;
    int cumulLength = 0; // Change there to hook declarators

    ifstream indata;
    string currentString;
    indata.open("textfile.txt");
    if (!indata)
    { // file couldn't be opened
        cerr << "Error: file could not be opened" << endl;
    }
    indata >> currentString;

    longestWord = currentString; // The longest word is set here to avoid a double condition in the while loop
    shortestWord = currentString;

    while (!indata.eof())
    { // keep reading until end-of-file
        cout << currentString << endl;
        if (currentString.length() > longestWord.length())
        {
            longestWord = currentString;
        }
        if (currentString.length() < longestWord.length())
        {
            shortestWord = currentString;
        }
        indata >> currentString; // sets EOF flag if no value found
        numberOfWords++;
        cumulLength += currentString.length();
    }
    float avgLength = cumulLength / numberOfWords;

    cout << "There are " << numberOfWords << " words in the file." << endl;
    cout << "The shortest word was \"" << shortestWord << "\" with " << shortestWord.length() << " character(s)." << endl;
    cout << "The longest word was \"" << longestWord << "\" with " << longestWord.length() << " characters." << endl;
    cout << "The average length was " << avgLength << " characters." << endl;
}