#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;
    long arr[str.size()] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                arr[i]++;
            }
        }
    }
    long counter2 = 0, counter1 = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (arr[i] >= 2)
            counter2++;
        else if (arr[i] == 1)
            counter1++;
    }
    if ((counter1 == 1 || counter1 == 0) && counter2 >= str.size() - 1)
        cout << "YES";
    else
        cout << "NO";

    // cout<<arr[i]<<" ";
    // cout << "Hello world!" << endl;
    return 0;
}