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
    int n,ones=0,zeroes=0;
    int count=0;
    cin>>n;
    string s;
    cin>>s;
        for(auto it:s){
        if(it=='0')
            zeroes++;
        else
            ones++;
    }
    if(ones==0||zeroes==0)
        cout<<"0"<<"\n";
    else if(ones==zeroes)
        cout<<ones-1<<"\n";
    else
        cout<<min(ones,zeroes)-1<<"\n";
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