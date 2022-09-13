#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
            counter++;
    }
    if (counter % 2 == 0)
        cout << "Unlucky";
    else
        cout << "Lucky";
    return 0;
}