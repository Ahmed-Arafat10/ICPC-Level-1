#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,a=0,b=0;
    cin>>x;
    for(int i=1; i<=x; i++)
    {
        for(int j=1; j<=x; j++)
        {
            if((i%j==0)&&(i*j>x)&&(j/i<x))
            {
                a=i;
                b=j;
            }
        }
    }
    if(a!=0&&b!=0)
        cout<<a<<" "<<b;
    else
        cout<<-1;
    return 0;
}
