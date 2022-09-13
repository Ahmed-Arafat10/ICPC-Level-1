#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string str1, str2;
    cin >> str1 >> str2;
    int x1 = (int)(str2[str2.size() - 1] - 48);
    int x2 = (int)(str1[str1.size() - 1] - 48);
    cout << x1 + x2;

    return 0;
}