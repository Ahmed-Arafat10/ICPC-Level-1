#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string A("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    long long int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    long long int small = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (small > arr[i])
            small = arr[i];
    }
    long long counter = 0;
    for (int i = 0; i < 4; i++)
    {
        if (small == arr[i])
            counter++;
    }
    if (counter > 1)
        cout << "Equal";
    else
    {
        int index;
        for (int i = 0; i < 4; i++)
        {
            if (small == arr[i])
                index = i;
        }
        if (index == 0)
            cout << "A";
        else if (index == 1)
            cout << "B";
        else if (index == 2)
            cout << "C";
        else if (index == 3)
            cout << "D";
    }
    return 0;
}