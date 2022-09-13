#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long long int arr[n], counter = 0, sum = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<long> v1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            sum += arr[j];
        }
        v1.push_back(sum);
        sum = 0;
    }

    for (int i = 0; i < v1.size(); i++)
    {

        if (v1[i] % 2 == 0)
            counter++;
    }
    cout << counter;

    return 0;
}