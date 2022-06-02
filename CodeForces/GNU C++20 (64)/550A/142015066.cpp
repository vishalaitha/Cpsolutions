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
    // cin>>n;
    string s;
    cin>>s;
    n=s.length();
    int countab=0,countba=0;
    int firstoccuranceofab=-1;
    int x1=s.find("AB");
    int x2=s.find("BA",x1+2);
    int y1=s.find("BA");
    int y2=s.find("AB",y1+2);
    
    if((x1!=-1&&x2!=-1)||(y1!=-1&&y2!=-1))
        cout<<"YES";
    else
        cout<<"NO";
cout<<endl;
}
int32_t main()
{
    _z;
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}