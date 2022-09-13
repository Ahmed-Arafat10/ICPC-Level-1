#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = n;
    int k = 1;
    for (int r = 1; r <= n * 2; r++)
    {
        if (r <= n)
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

        if (r > n && r <= n * 2)
        {
            s++;
            for (int space = 1; space < s; space++)
            {
                cout << " ";
            }

            k -= 2;
            for (int i = 0; i < k; i++)
            {
                cout << "*";
            }

            cout << endl;
        }
    }

    return 0;
}