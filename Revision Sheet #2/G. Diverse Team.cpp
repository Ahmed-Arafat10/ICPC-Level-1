#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v1;
    // vector<int> vindex;
    long testarr[n] = {0};
    long oneto100[101] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 100; j++)
        {
            if (arr[i] == j)
            {
                oneto100[j]++;
                //  cout<<j<<" ";
            }
        }
    }

    for (int j = 1; j <= 100; j++)
    {
        if (oneto100[j] >= 1)
        {
            v1.push_back(j);
            //  cout<<v1[c]<<" ";
        }
    }
    long finalarr[k] = {0};
    // cout<<"this"<<v1.size();
    if (v1.size() < k)
        cout << "NO";
    else if (v1.size() >= k)
    {
        cout << "YES" << endl;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            int j;
            for (j = 0; j < n; j++)
                if (arr[i] == arr[j])
                    break;
            if (i == j)
            {
                finalarr[c] = i + 1;
                c++;
            }
        }
        for (int i = 0; i < k; i++)
            cout << finalarr[i] << " ";
    }

    return 0;
}
 