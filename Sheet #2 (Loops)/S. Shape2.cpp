#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n;
    int k = 1;
    for (int r = 1; r <= n; r++)
    {
        for (int space = 1; space < s; space++)
        {
            cout << " ";
        }
        s--;
        for (int i = 0; i < k; i++)
        {
            cout << "*";
        }
        k += 2;
        cout << endl;
    }

    return 0;
}