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
    int n;
    cin>>n;
    string given;
    string ans;
    cin>>given;
    for(int i=0;i<n;i++){
        if(given[i]=='L'||given[i]=='R'){
            if(given[i]=='L')
            ans=ans+'L';
            else
            ans=ans+'R';
        }
        else if(given[i]=='U'||given[i]=='D'){
            if(given[i]=='U')
                ans=ans+'D';
            else
                ans=ans+'U';
        }
    }
    cout<<ans<<endl;
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