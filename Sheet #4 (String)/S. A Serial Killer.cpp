#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v1;
    string str1, str2;
    cin >> str1 >> str2;
    v1.push_back(str1);
    v1.push_back(str2);
    long num;
    cin >> num;
    cout << str1 << " " << str2 << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> str1 >> str2;
        for (int j = 0; j < v1.size(); j++)
        {
            if (str1 == v1[j])
                v1.erase(v1.begin() + j);
        }
        v1.push_back(str2);
        for (int k = 0; k < v1.size(); k++)
            cout << v1[k] << " ";
        cout << endl;
    }
    return 0;
}