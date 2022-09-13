#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == str2[i] && str2[i] == str3[i])
            cout << str1[i];
        else
        {
            int s1 = str1[i] - 'a';
            int s2 = str2[i] - 'a';
            int s3 = str3[i] - 'a';
            if (s1 <= s2 && s1 <= s3)
                cout << str1[i];
            else if (s2 <= s1 && s2 <= s3)
                cout << str2[i];
            else if (s3 <= s1 && s3 <= s2)
                cout << str3[i];
        }
    }
    return 0;
}