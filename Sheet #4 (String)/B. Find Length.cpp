#include <iostream>

using namespace std;

int main()
{
    long counter = 0;
    string str1;
    cin >> str1;
    for (int i = 0;; i++)
    {
        if (str1[i] == '\0')
            break;
        else
            counter++;
    }
    cout << counter;
    return 0;
}