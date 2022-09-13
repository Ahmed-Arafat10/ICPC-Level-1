#include <iostream>

using namespace std;

int main()
{
    long long num;
    cin >> num;
    long count = num;
    for (int i = 1; i <= num; i++)
    {

        for (int j = 0; j < count; j++)
        {
            cout << "*";
        }
        count--;
        cout << endl;
    }
    return 0;
}