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
    int n,d;
    cin>>n>>d;
    if(d==0||n==1)
        cout<<"1"<<endl;
    else{
    int total=1;
        if(d<=10)
            total=pow(2,d);
        else if(d>10)
        {   
            total=(1<<10);
            d-=10;
            while(d--){
                if(total>=n)
                    break;
                else
                    total=total*3;
            }
        }
    if(n<=total)
        cout<<n<<endl;
    else
        cout<<total<<endl;
    }
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