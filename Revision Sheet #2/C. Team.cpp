#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int FSIZE = 3 * size;
    int Myarr[FSIZE];
    int Counter = 0;
    for (int i = 0; i < FSIZE; i++)
    {
        cin >> Myarr[i];
    }
    for (int i = 0; i < FSIZE; i += 3)
    {
        int x = Myarr[i] + Myarr[i + 1] + Myarr[i + 2];
        if (x >= 2)
            Counter++;
    }
    cout << Counter;
    return 0;
}