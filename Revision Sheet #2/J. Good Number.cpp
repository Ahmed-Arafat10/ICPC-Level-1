#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n >> k;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long testarr[k + 1];
    for (int i = 0; i <= k; i++)
        testarr[i] = i;

    long counter2 = 0;
    for (int i = 0; i < n; i++)
    {
        long counter[k + 1] = {0};
        bool isfuck = true;
        for (int j = 0; j <= k; j++)
        {
            for (int w = 0; w < arr[i].size(); w++)
            {
                int num = (int)arr[i][w] - 48;
                if (num == testarr[j])
                {
                    counter[j]++;
                }
            }
            if (counter[j] == 0)
                isfuck = false;
        }
        if (isfuck)
            counter2++;
    }
    cout << counter2;
    return 0;
}
/*

*/