#include <iostream>

using namespace std;

int main()
{
    long long num;
    cin >> num;
    for (int i = 1; i <= 12; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}