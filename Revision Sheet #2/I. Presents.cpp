#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int oldarr[n] = {0}, newarr[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> oldarr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        newarr[oldarr[i]] = i;
    }
    for (int i = 1; i <= n; i++)
        cout << newarr[i] << " ";
    return 0;
}
 