#include <iostream>
#include <string>
using namespace std;
int main()
{
    string A("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string a("abcdefghijklmnopqrstuvwxyz");
    long n;
    cin >> n;
    string str;
    cin >> str;
    long counter[26] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 25; j++)
        {
            if (str[i] == A[j] || str[i] == a[j])
                counter[j]++;
        }
    }
    // int countertwo=0;
    bool ispangram = true;
    for (int i = 0; i <= 25; i++)
    {
        if (counter[i] == 0)
            ispangram = false;
    }
    if (ispangram)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
 