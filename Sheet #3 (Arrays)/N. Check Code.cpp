#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    string str;
    cin >> str;
    int size = A + B + 1;
    int counter = 0;
    string arr = "0123456789";
    if (str[A] == '-')
    {
        for (int i = 0; i < size; i++)
        {
            if (i == A)
                continue;
            for (int j = 0; j <= 9; j++)
            {
                if (str[i] == arr[j])
                    counter++;
            }
        }
        if (counter == (A + B))
            cout << "Yes";
        else
            cout << "No";
    }
    else
        cout << "No";

    return 0;
}