#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, newstr = "";
    cin >> str;
    string newstr2 = str;
    long counter = 1;
    for (int i = 0;; i++)
    {
        string test(1, newstr2[str.size() - 1]);
        newstr2.erase(newstr2.end() - 1);
        // cout<<newstr2<<" ";
        newstr = test + newstr2;
        // cout<<newstr<<" ";
        if (newstr == str)
            break;
        else
        {
            counter++;
            // cout<<newstr<<" ";
        }
        newstr2 = newstr, newstr = "";
    }
    cout << counter;
    return 0;
}

 