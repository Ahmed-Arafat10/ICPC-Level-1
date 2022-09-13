#include <iostream>

using namespace std;

int main()
{
    double num;
    cin >> num;
    if (num >= 0 && num <= 25)
    {
        cout << "Interval ";
        cout << "[0,25]";
    }
    else if (num >= 25 && num <= 50)
    {
        cout << "Interval ";
        if (num == 25)
            cout << "[";
        else
            cout << "(";
        cout << "25,50]";
    }
    else if (num >= 50 && num <= 75)
    {
        cout << "Interval ";
        if (num == 50)
            cout << "[";
        else
            cout << "(";
        cout << "50,75]";
    }
    else if (num >= 75 && num <= 100)
    {
        cout << "Interval ";
        if (num == 75)
            cout << "[";
        else
            cout << "(";
        cout << "75,100]";
    }
    else
        cout << "Out of Intervals";
    return 0;
}