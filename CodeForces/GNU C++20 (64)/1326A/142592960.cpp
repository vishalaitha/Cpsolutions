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
    int n;
    cin>>n;
    if(n==1)
        cout<<"-1";
    else{
        cout<<"4";
        for(int i=1;i<n;i++){
            cout<<3;
        }
    }
cout<<endl;
}
//23579
//45679
//34579
//56789
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