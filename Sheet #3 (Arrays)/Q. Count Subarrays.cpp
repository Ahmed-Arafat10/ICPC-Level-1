#include <iostream>

using namespace std;

int main()
{

    bool counter;

    long count = 0, c = 0;
    int T;
    cin >> T;
    long save_counter[T];
    for (int r = 0; r < T; r++)
    {
        int n;
        cin >> n;
        long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i > j)
                    continue;
                for (int k = i; k <= j; k++)
                {
                    if (k == j)
                    {
                        counter = true;
                        break;
                    }
                    if (arr[k] > arr[k + 1])
                    {
                        counter = false;
                        break;
                    }
                    else
                    {
                        counter = true;
                    }
                }
                if (counter)
                    count++;
                counter = false;
            }
        }

        save_counter[r] = count;
        count = 0;
    }
    for (int i = 0; i < T; i++)
        cout << save_counter[i] << endl;
    return 0;
}
/*
4
1 4 2 3
*/