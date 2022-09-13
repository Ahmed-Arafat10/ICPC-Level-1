#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    char x, z;
    cin >> x;
    int countA = 0, counta = 0;
    for (int i = 65; i < 91; i++)
    {
        z = (char)i;
        if (x == z)
            countA++;
    }
    for (int i = 97; i < 123; i++)
    {
        z = (char)i;
        if (x == z)
            counta++;
    }
    if (countA > 0)
        cout << "IS CAPITAL";
    if (counta > 0)
        cout << "IS SMALL";
    return 0;
}