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
    int n,x,weightadded=0;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int total=accumulate(v.begin(),v.end(),0);
    if(total==x){
        cout<<"NO"<<endl;
        return;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(weightadded+v[i]==x){
            swap(v[i],v[n-1]);
            weightadded+=v[i];
            v.push_back(v[i]);
        }
        else{
            weightadded+=v[i];
            ans.push_back(v[i]);
        }
    }
    //cout<<"total weight added "<<weightadded<<endl;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
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