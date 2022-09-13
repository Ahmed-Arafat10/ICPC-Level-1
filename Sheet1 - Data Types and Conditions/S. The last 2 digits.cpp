#include <bits/stdc++.h>
//#include <windows.h>
typedef long long ll;
using namespace std;
ll mod = 1000000007;
map<ll, ll> mp;
int main()
{
    // string str;
    // getline(cin,str);
    // string r = "https://www.google.com/search?gs_ssp=eJzj4tTP1TdIqcpJqjBg9OLILMrPU8hNzAMASJ8Gyg&q=";
    // string res = r +str;
    // ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
    ////    PlaySound(TEXT("DragonQuest.wav"),NULL,SND_SYNC);
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll x1 = (A * B) % 100, x2 = (C * D) % 100;
    ll result = x1 * x2;
    if (result % 100 <= 9)
        cout << 0 << result % 100;
    else
        cout << result % 100;
}
/*
15
323213 1 2 3 4 5 6 7 7 6 5 4 3 2 1
5
1 1 2 2 3
*/

//----
#include <bits/stdc++.h>
//#include <windows.h>
typedef long long ll;
using namespace std;
ll mod = 1000000007;
map<ll, ll> mp;
int main()
{
    // string str;
    // getline(cin,str);
    // string r = "https://www.google.com/search?gs_ssp=eJzj4tTP1TdIqcpJqjBg9OLILMrPU8hNzAMASJ8Gyg&q=";
    // string res = r +str;
    // ShellExecute(NULL,"open",res.c_str(),NULL,NULL,SW_SHOWNORMAL);
    ////    PlaySound(TEXT("DragonQuest.wav"),NULL,SND_SYNC);
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll x1 = (A * B) % 100, x2 = (C * D) % 100;
    ll result = x1 * x2;
    if (result % 100 <= 9)
        cout << 0 << result % 10;
    else
        cout << result % 100;
}
/*
15
323213 1 2 3 4 5 6 7 7 6 5 4 3 2 1
5
1 1 2 2 3
*/

//---
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main()
{

    long long int a, b, c, d, ab, cd, abdigit, cddigit;
    cin >> a >> b >> c >> d;
    ab = a * b;
    cd = c * d;
    abdigit = ab % 100;
    cddigit = cd % 100;
    long long int result = abdigit * cddigit;
    if (result % 100 <= 9)
        cout << 0 << result % 100;
    else
        cout << result % 100;
}
// 1123456789