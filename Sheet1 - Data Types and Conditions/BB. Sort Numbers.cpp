#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    double num, num2, num3;
    cin >> num;
    cin >> num2;
    cin >> num3;

    if (num < num2 && num <= num3)
    {
        cout << num << endl;
        if (num2 < num3)
        {
            cout << num2 << endl;
            cout << num3 << endl;
        }
        else
        {
            cout << num3 << endl;
            cout << num2 << endl;
        }
    }
    else if (num2 < num3 && num2 <= num3)
    {
        cout << num2 << endl;
        if (num < num3)
        {
            cout << num << endl;
            cout << num3 << endl;
        }
        else
        {
            cout << num3 << endl;
            cout << num << endl;
        }
    }
    else if (num3 < num && num3 <= num2)
    {
        cout << num3 << endl;
        if (num < num2)
        {
            cout << num << endl;
            cout << num2 << endl;
        }
        else
        {
            cout << num2 << endl;
            cout << num << endl;
        }
    }
    if (num == num2 && num2 == num3)
    {
        cout << num << endl;
        cout << num2 << endl;
        cout << num3 << endl;
    }

    cout << endl
         << num << endl;
    cout << num2 << endl;
    cout << num3;

    return 0;
}