#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float first_price;
    float last_price;
    float stride;
    float percentage;
    int w{16};

    cout << "\nEnter first price: ";
    cin >> first_price;
    while (!((first_price >= -1) && (first_price <= 10000)))
    {
        cout << "\nPlease enter a numerical value between -1 and 10000: ";
        cin >> first_price;
    }
    cout << "\nEnter last price: ";
    cin >> last_price;
    while (!(((last_price >= -1) && (last_price <= 10000)) && (last_price > first_price)))
    {
        cout << "\nPlease enter a numerical value between -1 and 10000 that is higher than the first price: ";
        cin >> last_price;
    }
    cout << "\nEnter stride: ";
    cin >> stride;
    while (!((stride > 0) && (stride <= (last_price - first_price))))
    {
        cout << "\nPlease enter a positive value, smaller than the price range: ";
        cin >> stride;
    }
    cout << "\nEnter tax percentage: ";
    cin >> percentage;
    while (!((abs(percentage)) < 100))
    {
        cout << "\nPlease enter a percentage between -100 and 100, with only numbers: ";
        cin >> percentage;
    }
    cout << endl;
    percentage /= 100;

    cout << setw(w) << "Price" << setw(w) << "Tax" << setw(w) << "Price with tax" << endl;
    cout << string(3 * w, '-') << endl;
    for (float i = first_price; i <= last_price; i += stride)
    {
        cout << setw(w) << fixed << setprecision(2) << right << i /*fixed is for always displaying 2 decimals*/
             << setw(w) << right << percentage * i
             << setw(w) << right << i + percentage * i << endl;
    };
    if (fmod(last_price - first_price, stride) != 0)
    {
        cout << setw(w) << fixed << setprecision(2) << right << last_price
             << setw(w) << percentage * last_price << setw(w) << last_price + percentage * last_price << endl;
    };
}