#include <iostream>
#include <sstream>

using namespace std;
int main()
{
    long long int N, sum = 0, counter = 0;
    long long m;
    string str;
    cin >> N;
    long long int arr[N];
    cin >> str;
    char str1 = str[0];
    for (long long int i = 0; i < N; i++)
    {
        char str1 = str[i];

        // stringstream geek(str1);
        int x = (int)str1 - 48;
        // geek>>x;
        arr[i] = x;
        // cout<<arr[i]<<endl;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
/*
30
123456789123456789123456789123

*/