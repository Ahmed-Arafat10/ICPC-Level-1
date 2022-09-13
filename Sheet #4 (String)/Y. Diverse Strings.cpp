#include <bits/stdc++.h>
using namespace std;
int main()
{
    long num;
    cin >> num;

    string str[num];
    for (int i = 0; i < num; i++)
        cin >> str[i];
    string alph = "abcdefghijklmnopqrstuvwxyz";
    long arr[26] = {0};
    string output[num];
    bool isconsecutive = true;
    for (int i = 0; i < num; i++)
    {
        string str_test = str[i];
        for (int k = 0; k < str[i].size(); k++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (str_test[k] == alph[j])
                    arr[j]++;
            }
        }
        int best = 0;
        for (int j = 0; j < 26; j++)
        {
            if (arr[j] >= 2)
                isconsecutive = false;
            else if (arr[j] == 1)
            {
                for (int k = j, w = 0; w < str_test.size(); k++, w++)
                {
                    if (arr[k] != 1)
                    {
                        isconsecutive = false;
                        break;
                    }
                }
                break;
            }

            // cout<<j<<" ";
        }
        for (int j = 0; j < 26; j++)
            arr[j] = 0;
        if (isconsecutive)
            output[i] = "Yes";
        else
            output[i] = "No";
        isconsecutive = true;
    }

    for (int i = 0; i < num; i++)
        cout << output[i] << endl;
    return 0;
}

 