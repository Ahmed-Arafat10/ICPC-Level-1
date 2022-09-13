#include <bits/stdc++.h>
using namespace std;
int main()
{

    //      long long int i,x,y,sum=0;
    //      cin>>x>>y;
    //      string str;
    //      stringstream o(str);
    //      o<<((x+y)/2)*((abs(x-y)+1));
    //      o>>str;
    //      cout<<str;

    long long int x, counter = 0;
    cin >> x;
    for (int i = 1; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            counter++;
    }
    if (counter == 1 && x != 1)
        cout << "YES";
    else
        cout << "NO";
}