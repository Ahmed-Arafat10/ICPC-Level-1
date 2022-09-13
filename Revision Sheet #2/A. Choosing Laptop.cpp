#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long arr[n][4];
    long max[1][4] = {0};
    long location[n] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    long maxindex;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr[i][0] > arr[j][0]) && (arr[i][1] > arr[j][1]) && (arr[i][2] > arr[j][2]))
            {
                for (int k = 0; k < 4; k++)
                {
                    // max[0][k]=arr[i][k];
                    location[j]++;
                }
            }
        }
    }

    long whichone = 10000;
    for (int i = 0; i < n; i++)
    {
        if (location[i] == 0)
        {
            if (whichone > arr[i][3])
            {
                whichone = arr[i][3];
                maxindex = i + 1;
            }
        }
    }
    cout << maxindex;
    return 0;
}