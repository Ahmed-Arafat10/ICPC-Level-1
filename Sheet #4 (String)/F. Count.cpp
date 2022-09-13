#include <iostream>

using namespace std;

int main()
{

    string str1;
    cin >> str1;
    long long int sum = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        int x = (int)str1[i] - '0';
        sum += x;
    }
    cout << sum;
    return 0;
}