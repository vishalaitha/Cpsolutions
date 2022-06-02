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
    if(n%2==0){
        if(n!=2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else{
    cout<<"NO"<<endl;
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