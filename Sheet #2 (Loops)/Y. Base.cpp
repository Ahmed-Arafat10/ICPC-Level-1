#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    for (int r = 1; r <= tcase; r++)
    {
        long long int x;
        long long int counter = 0;
        vector<int> V;
        cin >> x;
        while (true)
        {
            if (x % 2 == 0)
            {
                if (x == 0)
                    break;
                x /= 2;
                V.push_back(0);
                counter++;
            }
            else
            {
                x /= 2;
                V.push_back(1);
                counter++;
            }
        }
        long long int tenth = 1, total1 = 0, count_digit = 0;
        for (long long int i = 0; i < counter; i++)
            cout << V[i];
        cout << endl;
    }
    return 0;
}