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
  
  string a,b;
  int extra1,extra2;
  cin>>a>>extra1;
  cin>>b>>extra2;
  while(a.length()>0&&a.back()=='0'){
          a.pop_back();
          extra1++;
  }
  while(b.length()>0&&b.back()=='0'){
           b.pop_back();
           extra2++;
  }
    if((a.length()+extra1)>(b.length()+extra2))
        cout<<">";
    else if((a.length()+extra1)<(b.length()+extra2))
        cout<<"<";
    else{
        if(a>b)
            cout<<">";
        else if(a<b)
            cout<<"<";
        else 
            cout<<"=";
    }
    // cout<<a<<" "<<b;ṇ
cout<<endl;
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