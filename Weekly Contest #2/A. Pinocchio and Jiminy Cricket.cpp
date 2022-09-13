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
    ll arr[5];
    for0(i,5)cin>>arr[i];
    ll n;
    cin>>n;
    ll rm = n % 5;
    while(rm--)
    {
        for(ll i = 0; i<4; i++)
        {
            swap(arr[i],arr[i+1]);
        }
    }
    for0(i,5)cout<<arr[i]<<" ";
}