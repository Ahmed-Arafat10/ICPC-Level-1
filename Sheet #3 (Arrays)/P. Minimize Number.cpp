#include <iostream>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int counter = 0;
    for (int i = 0;; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (!(arr[j] % 2 == 0))
            {
                cout << counter;
                return 0;
            }
        }
        for (int k = 0; k < n; k++)
        {
            arr[k] /= 2;
        }
        counter++;
    }
    cout << counter << endl;
    return 0;
}