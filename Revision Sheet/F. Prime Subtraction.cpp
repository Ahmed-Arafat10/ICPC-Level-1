#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ff first
#define ss second
#define for0(i,n)  for(ll i = 0; i<n; i++)
#define for1(i,n)  for(ll i = 0; i<=n; i++)
#define for2(i,n)  for(ll i = 1; i<=n; i++)
#define bug(x) cout<<"This->"<<x<<"\n";
#define bug(x,y) cout<<x<<"-"<<y<<"\n";
#define BL puts("");
#define yes cout<<"YES"<<"\n";
#define no cout<<"NO";
typedef long long ll;
/*STLs*/
typedef vector<ll> vll;
typedef queue<ll> qll;
typedef stack<ll> stkll;
typedef pair<ll,ll> pll;
typedef set<ll> sll;
typedef map<ll,ll> mpll;
typedef vector<pair<ll,ll>> vpll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll res = x - y;
        if(res != 1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}