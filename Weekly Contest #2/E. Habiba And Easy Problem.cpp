#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int x,a,b,N;
    //  cin>>N;
    //  int arr[N];
    //  for(int i=0;i<N;i++)
    //    cin>>arr[i];
    //  cin>>x>>a>>b;
    //    sort(arr,arr+N);
    //      for(int i=0;i<N;i++)
    //            cout<<arr[i]<<" ";
    //            cout<<endl;
    //    if(x==1)
    //       cout<<arr[a-1]+arr[b-1];
    //        else  if(x==2)
    //            cout<<arr[a-1]-arr[b-1];
    //         else  if(x==3)
    //         cout<<arr[a-1]*arr[b-1];
    int arr[3], counter = 0, max = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 1; i <= arr[0]; i++)
    {
        for (int j = 1; j <= arr[0]; j++)
        {
            if (i >= 1 && j <= arr[0] && (i + j) % arr[1] == arr[2])
                counter++;
        }
    }
    cout << counter;
}

//--
#include <bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define ff first
#define ss second
#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 0; i <= n; i++)
#define for2(i, n) for (ll i = 1; i <= n; i++)
#define bug(x) cout << "This->" << x << "\n";
#define bug(x, y) cout << x << "-" << y << "\n";
#define BL puts("");
#define yes cout << "YES" << "\n";
#define no cout << "NO";
typedef long long ll;
/*STLs*/
typedef vector<ll> vll;
typedef queue<ll> qll;
typedef stack<ll> stkll;
typedef pair<ll, ll> pll;
typedef set<ll> sll;
typedef map<ll, ll> mpll;
typedef vector<pair<ll, ll>> vpll;

int main()
{
    // One line contains three integers N , C and D where ( 1 <= N, C,D <= 100).
    int N, C, D;
    cin >> N >> C >> D;
    ll cnt = 0;
    for (ll i = 1; i <= N; i++)
    {
        for (ll j = 1; j <= N; j++)
        {
            if ((i + j) % C == D) cnt++;
        }
    }
    cout << cnt;
    return 0;
}
