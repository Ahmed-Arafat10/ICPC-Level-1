#include <bits/stdc++.h>
using namespace std;
int main()
{

    long size;
    cin >> size;
    string str;
    cin >> str;
    int x;
    string str2(1, str[size - 1]);
    // cout<<str2;
    str.erase(str.begin() + (size - 1));
    for (int i = 0, j = size - 2; i < size - 1; i++, j--)
    {
        string test(1, str[j]);
        str2.insert(str2.size() / 2, test);
        str.erase(str.begin() + j);
    }

    cout << str2;

    // string str;
    // cin>>str;
    // char arr[str.size()];
    // vector<char> v2;
    // int size=str.size();
    // int x;
    // for(int i=0;i<size;i++){
    //         if(str.size()%2==0)
    //          x=(str.size()/2)-1;
    //         else
    //         x= (str.size()/2);
    //
    //     for(int j=0;j<str.size();j++){
    //     if(x==j){
    //         v2.push_back(str[j]);
    //         str.erase(str.begin()+j);
    //
    //     }
    //
    //     }
    //     cout<<v2[i];
    // }
    //

    return 0;
}

 