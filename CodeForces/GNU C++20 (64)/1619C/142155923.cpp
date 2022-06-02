//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
#define ll long long
#define MOD 1000000007
#define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
//#define for(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define int long long int
int ans,temp,sum;
using namespace std;
void solve(){
    int a,s;
    cin>>a>>s;
    vector<int>b;
    while(s){
        int x=a%10;
        int y=s%10;
        if(x<=y) b.emplace_back(y-x);
        else{
            s/=10;
            y+=(s%10)*10;
                if(x<y && y>=10 && y<=19) b.emplace_back(y-x);
                else{
                    cout<<"-1"<<endl;
                    return;
                }
        }
        s/=10;
        a/=10;
    }
    if(a) cout<<"-1"<<endl;
    else{
        while(b.back()==0) b.pop_back();
        for(int i=b.size()-1;i>=0;i--){
                cout<<b[i];
        }
        cout<<endl;
    }
}
int32_t main()
{
    _z;
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}