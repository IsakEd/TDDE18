// Text reader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream file("TextFile1.txt");

    if (!file) {

        cerr << "file was not found.";

    }

    string word{};
    float totalCharacters{};
    float total{};
    float average{};
    string max{};
    string min{"banana"};



    while (file >> word) {

        total++;
        totalCharacters = totalCharacters + word.size();

        if (word.size() > max.size()) {

            max = word;
        }
        if (word.size() < min.size()) {

            min = word;
        }
    }

    average = totalCharacters / total;

    cout << "File has " << total << " words";
    cout << "\nThe longest word in the file is: " << max << " with " << max.size() << " character(s).";
    cout << "\nThe shortest word in the file is: " << min << " with " << min.size() << " character(s).";
    cout << "\nThe average length of the words was " << average << " character(s)";
    
}

