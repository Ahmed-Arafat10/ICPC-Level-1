#include <iostream>
#include <string>
using namespace std;

int main()
{
    string A("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string a("abcdefghijklmnopqrstuvwxyz");
    char x;
    cin >> x;
    for (int i = 0; i < 26; i++)
    {
        if (x == A[i])
        {
            cout << a[i];
            break;
        }
        if (x == a[i])
        {
            cout << A[i];
            break;
        }
    }
    return 0;
}