#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    char arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    if (str == "Horizontally")
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j];
            }
            if (i != (n - 1))
                cout << endl;
        }
    }
    else if (str == "Vertically")
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < m; j++)
            {
                cout << arr[i][j];
            }
            if (i != 0)
                cout << endl;
        }
    }
    else if (str == "Diagonally")
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << arr[i][j];
            }
            if (i != 0)
                cout << endl;
        }
    }
    // cout << "Hello world!" << endl;
    return 0;
}