#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max = arr[0];
    int cmax = 0;
    int min = arr[0];
    int cmin = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cmax = i;
        }
        if (min > arr[i])
        {
            min = arr[i];
            cmin = i;
        }
    }
    int swap = arr[cmax];
    arr[cmax] = arr[cmin];
    arr[cmin] = swap;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}