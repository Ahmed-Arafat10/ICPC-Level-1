#include <iostream>
using namespace std;
int main()
{
    int round;
    cin >> round;
    long smallest[round];
    for (int r = 0; r < round; r++)
    {
        int size;
        cin >> size;
        long long arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        long long num;
        long long small = 1000000000;
        for (long long i = 0; i < size; i++)
        {
            for (long long j = i + 1; j < size; j++)
            {
                num = arr[i] + arr[j] + j - i;
                if (small > num)
                    small = num;
            }
        }
        smallest[r] = small;
    }
    // printing
    for (int i = 0; i < round; i++)
        cout << smallest[i] << endl;
    return 0;
}
/*
1
4
1000000 1000000 1000000 1000000
*/