#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string str11, str12, str21, str22;
    cin >> str11 >> str12 >> str21 >> str22;
    if (str12 == str22)
        cout << "ARE Brothers";
    else
        cout << "NOT";
    return 0;
}