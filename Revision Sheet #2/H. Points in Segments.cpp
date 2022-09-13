#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][2];
    int numarr[m];
    int numarrsec[m] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
        numarr[i - 1] = i;
    int c = 0;
    for (int r = 0; r < n; r++)
    {
        for (int i = arr[c][0]; i <= arr[c][1]; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (i == numarr[j])
                    numarrsec[j]++;
            }
        }
        c++;
    }
    // for(int i=0;i<m;i++)
    //     cout<<numarrsec[i]<<" ";
    int counter = 0;
    for (int i = 0; i < m; i++)
    {
        if (numarrsec[i] == 0)
        {
            counter++;
        }
    }
    if (counter == 0)
        cout << 0 << endl;
    if (counter > 0)
        cout << counter << endl;
    for (int i = 0; i < m; i++)
    {
        if (numarrsec[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }

    return 0;
}
 