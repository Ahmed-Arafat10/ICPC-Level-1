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
    short x;
    int N,a,b;
    cin>>N;
    vector<short>arr(N);
    for(int i=0; i<N; i++) cin>>arr[i];
    cin>>x>>a>>b;
    sort(arr.begin(),arr.end());
    for(int i=0; i<N; i++) cout<<arr[i]<<" ";
    cout<<endl;
    if(x==1) cout<<arr[a-1]+arr[b-1];
    else if(x==2) cout<<arr[a-1]-arr[b-1];
    else if(x==3) cout<<arr[a-1]*arr[b-1];
    return 0;
}