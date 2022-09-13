#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum1 = 0, sum2 = 0, num, main_num;
        string str;
        cin >> str;
        int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        for (int i = 0; i < str.size(); i++)
        {
            string str2(1, str[i]);
            stringstream test(str2);
            test >> num;
            for (int i = 0; i <= 9; i++)
            {
                if (num == i)
                    main_num = arr[i];
            }
            if (i <= (str.size() / 2 - 1))
                sum1 += main_num;
            else
                sum2 += main_num;
        }
        if (sum2 == sum1)
            cout << "GOOD" << endl;
        else
            cout << "NOT GOOD" << endl;
        sum1 = 0, sum2 = 0;
    }
    return 0;
}