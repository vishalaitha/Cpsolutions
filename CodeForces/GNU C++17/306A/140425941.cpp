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
void solve(){
    int m,n,total;
    vector<int>v;
    cin>>m>>n;
    total=m;
    // if(n>m)
    for(int i=0;i<n;i++){
        int temp=0;
        v.push_back(temp);
    }
    // cout<<"INITIALLY"<<endl;
    //     for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        if(total==0){
            break;
        }
        else{
            v[i]++;
        }
        if(i==n-1)
            i=-1;
            total--;
    }
    // sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}