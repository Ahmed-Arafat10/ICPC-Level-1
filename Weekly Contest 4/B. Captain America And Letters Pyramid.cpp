#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        int num = (int)c - 'a';
        for (int i = 0; i <= num; i++)
        {
            char z = (char)i + 'a';
            cout << z;
        }
        for (int i = num - 1; i >= 0; i--)
        {
            char z = (char)i + 'a';
            cout << z;
        }
        if (t != 0)
            cout << endl;
    }
    //  string str;

    return 0;
}