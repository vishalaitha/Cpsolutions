//#include<bits/stdc++.h>
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
#include<numeric>
#include<climits>
#define ll long long
#define MOD 1000000007
using namespace std;
#define int long long int
void solve(){
    int n;
    cin>>n;
    vector<int>inpu;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        inpu.push_back(temp);
    }
    sort(inpu.begin(),inpu.end());
    int ans=(inpu[n-1]-inpu[0])*(inpu[n-2]);
    cout<<ans<<"\n";
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}