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
#define endl "\n"
#define int long long int
int ans,temp,sum;
using namespace std;
void solve(){
    int arr[1000][1000],n,x,y;
    int cx,cy;
    cin>>n>>x>>y;
    cx=(n/2)+1;
    cy=(n/2)+1;
    ans=0;
    if(x==y||x+y==cx+cy)
        cout<<"0";
    else{
        if((x%2==0&&y%2==1)||(x%2==1&&y%2==0))
            cout<<"1";
        else
            cout<<"0";
    }
    // else{
    //     if(y%2==0&&x%2==1)
    //         cout<<"1";
    //     else
    //     cout<<"0";
    // }
cout<<endl;
    // if(x==y||x+y==cx+cy)
    //     cout<<"0"<<endl;
    // else if(x==cx&&((abs(cy-y))%2==0))
    //     cout<<"0"<<endl;
    // else if(y==cy&&((abs(cx-x))%2==0))
    //     cout<<"0"<<endl;
    // else
    //     cout<<"1"<<endl;
// cout<<endl;
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