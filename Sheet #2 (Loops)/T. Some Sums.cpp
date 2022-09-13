#include <iostream>

using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int sum_specific_number = 0;
    int sum_number = 0;
    int x;
    int m = 0;
    for (int i = 1; i <= N; i++)
    {
        x = i;
        while (x > 0)
        {
            m = x % 10;
            sum_specific_number = sum_specific_number + m;
            x = x / 10;
        }
        if (sum_specific_number >= A && sum_specific_number <= B)
        {
            sum_number += i;
        }
        sum_specific_number = 0;
    }
    cout << sum_number;
    return 0;
}