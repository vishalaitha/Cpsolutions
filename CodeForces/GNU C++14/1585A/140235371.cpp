#include<bits/stdc++.h>
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
// #define and &&
#define MOD 1000000007
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int>ans;
    ans.push_back(v[0]);
    for(int i=1;i<n;i++){
        if(v[i]==0 and v[i-1]==0){
            cout<<"-1"<<endl;
            return;
        }
        else if(v[i]==0)
            ans.push_back(0);
        else if(v[i]>0 and v[i-1]>0)
            ans.push_back(5);
        else
            ans.push_back(1);
    }
    int answer=accumulate(ans.begin(), ans.end(),0);
    cout<<answer+1<<endl;
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