#include <iostream>

using namespace std;

int main()
{

    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.size() << " " << str2.size() << endl;
    cout << str1 + str2 << endl;
    char forstr2 = str2[0];
    str2[0] = str1[0];
    str1[0] = forstr2;
    cout << str1 << " " << str2;
    return 0;
}