#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string A("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    long long int input;
    cin >> input;
    int divyear = input / 365; // Used
    int resultyear = divyear * 365;
    int x1 = input - resultyear;
    int divmonth = x1 / 30; // Used
    int resultmonth = divmonth * 30;
    int x2 = x1 - resultmonth;
    cout << divyear << " years" << endl;
    cout << divmonth << " months" << endl;
    cout << x2 << " days";
    return 0;
}