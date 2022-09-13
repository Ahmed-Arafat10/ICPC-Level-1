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
    //One line contains three integers N , C and D where ( 1 <= N, C,D <= 100).
    ll t, n;
    cin>>t;
    while(t--)
    {
        ll sum = 0;
        bool odd = 0, even = 0;
        cin>>n;
        ll arr[n];
        for0(i,n)
        {
            cin>>arr[i];
            sum += arr[i];
            if(arr[i] & 1)odd = 1;
            else even = 1;
        }
        if(sum & 1 || even && odd) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

///----

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
    //One line contains three integers N , C and D where ( 1 <= N, C,D <= 100).
    ll t, n;
    cin>>t;
    while(t--)
    {
        ll sum = 0;
        cin>>n;
        ll arr[n];
        for0(i,n)
        {
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum & 1)
        {
            cout<<"YES\n";
            continue;
        }
        bool flag = false;
        for(ll i=0; i<n; i++)
        {
            sum -= arr[i];
            for(ll j=0; j<n; j++)
            {
                sum += arr[j];
                if(sum & 1)
                {
                    flag = true;
                    break;
                }
                sum -= arr[j];
            }
            if(flag) break;
            sum += arr[i];
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}