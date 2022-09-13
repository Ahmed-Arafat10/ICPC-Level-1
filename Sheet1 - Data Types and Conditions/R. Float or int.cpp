#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double num;
    cin >> num;
    int numsec = (int)num;
    if (numsec == num)
    {
        cout << "long long " << numsec;
    }
    else
    {
        double reminder = numsec - num;
        cout << "double " << numsec << " " << abs(reminder);
    }
    return 0;
}