#include <iostream>

using namespace std;

int main()
{
    int round;
    cin >> round;
    bool isbeuty[round];
    for (int r = 0; r < round; r++)
    {
        int var;
        cin >> var;
        int var_arr[var];
        for (int i = 0; i < var; i++)
        {
            cin >> var_arr[i];
        }

        int sum = 0, counter = 0;
        int rand = (var * (var - 1)) / 2;
        for (int i = 0; i < var; i++)
        {
            for (int j = 0; j < var; j++)
            {
                if (i == j)
                    continue;
                sum += var_arr[i] + var_arr[j];
                for (int k = 0; k < var; k++)
                {
                    if (sum == var_arr[k])
                        counter++;
                }
                sum = 0;
            }
        }

        if (counter > rand)
            isbeuty[r] = true;
        else
            isbeuty[r] = false;
    }
    for (int i = 0; i < round; i++)
    {
        if (isbeuty[i])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}