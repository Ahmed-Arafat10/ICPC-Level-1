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
const ll N = 1e7;
bool seive[N];
vector<ll>v1;
void solve()
{
    seive[0] = seive[1] = 1;
    for(ll i =2; i<N; i++)
    {
        //cout<<i;
        if(!seive[i])
        {
            if(i <= 100000) v1.push_back(i);
            for(ll j = i*i; j<N; j+=i)
            {
                seive[i] = 1;
            }
        }
    }
}

int main()
{
    //solve();
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i =0; i<n; i++) cin>>arr[i];
    sort(arr,arr+n);
    ll cnt = 0;
    for(ll i =0; i<n-1; i+=2)
    {
        cnt += abs(arr[i+1]-arr[i]);
    }
    cout<<cnt;

    return 0;
}
