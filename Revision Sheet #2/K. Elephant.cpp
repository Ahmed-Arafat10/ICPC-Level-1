#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long int x, y, counter = 0;
    cin >> x;
    y = x;
    while (y >= 5)
    {
        y -= 5;
        counter++;
    }
    while (y >= 4)
    {
        y -= 4;
        counter++;
    }
    while (y >= 3)
    {
        y -= 3;
        counter++;
    }
    while (y >= 2)
    {
        y -= 2;
        counter++;
    }
    while (y >= 1)
    {
        y -= 1;
        counter++;
    }
    cout << counter;
    return 0;
}