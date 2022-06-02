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
    // cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>c)
        cout<<"TRAIN"<<"\n";
    else if(a+b==c)
        cout<<"EQUAL"<<"\n";
    else
        cout<<"PLANEBUS"<<"\n";
    
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