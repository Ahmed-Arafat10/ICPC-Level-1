#include <bits/stdc++.h>
using namespace std;

int main()
{
    long counter = 0;
    string str;
    cin >> str;
    char arr[] = {'n', 'i', 't', 'e'};
    int arr_counter[4] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        // char c=(char)str[i];
        for (int j = 0; j < 4; j++)
        {
            if (str[i] == arr[j])
                arr_counter[j]++;
        }
    }
    // for(int j=0;j<4;j++)
    //    cout<<arr_counter[j]<<" ";
    if (arr_counter[0] >= 3 && arr_counter[3] >= 3 && arr_counter[1] >= 1 && arr_counter[2] >= 1)
    {
        for (int i = 0;; i++)
        {
            arr_counter[0] -= 3;
            arr_counter[1]--;
            arr_counter[2]--;
            arr_counter[3] -= 3;
            counter++;
            arr_counter[0]++;
            if (arr_counter[0] < 3 || arr_counter[1] < 1 || arr_counter[2] < 1 || arr_counter[3] < 3)
                break;
        }
        cout << counter;
    }
    else
        cout << counter;

    return 0;
}