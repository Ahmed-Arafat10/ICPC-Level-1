#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    // long save_counter;
    vector<vector<long>> v1;
    vector<long> v2;
    for (long r = 0; r < T; r++)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long max;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j)
                    continue;
                // cout<<i<<j;
                max = arr[i];
                for (int k = i; k <= j; k++)
                {
                    if (max < arr[k])
                        max = arr[k];
                }
                // cout<<max<<endl;
                v2.push_back(max);
            }
        }
        v1.push_back(v2);
        v2.clear();
    }

    for (int i = 0; i < T; i++)
    {
        for (long long j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
            if (j == (v1[i].size() - 1))
                cout << endl;
        }
    }

    return 0;
}
/*
1
3
3 1 2
*/

 