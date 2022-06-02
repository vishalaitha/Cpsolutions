// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<set>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<iomanip>
#include<climits>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi=max(max(a,b),c);
    if(a>b&&a>c&&a==maxi)
        cout<<"0 ";
    else
        cout<<maxi-(a)+1<<" ";
    if(b>a&&b>c&&b==maxi)
        cout<<"0 ";
    else
        cout<<maxi-(b)+1<<" ";
    if(c>a&&c>b&&c==maxi)
        cout<<"0 ";
    else
        cout<<maxi-(c)+1<<" ";
    cout<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}