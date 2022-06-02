/*I_Am_A_Noob*/

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
//#define for(z,x,y) for(int i=z;i<x;i+=y)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define endl "\n"
#define int long long int

int ans,temp,sum;
using namespace std;

void solve(){                   
    int n,m,r,c;                  
    cin>>n>>m>>r>>c;                 
    char arr[51][51];
    int ct=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char temp;
            cin>>temp;
            arr[i][j]=temp;
            if(temp=='W')
                ct++;

        }
    }
    if(ct==n*m){
        cout<<"-1"<<endl;
        return;
    }
    if(arr[r-1][c-1]=='B'){
        cout<<"0"<<endl;
        return;
    }
    bool found=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==r-1||j==c-1){
                if(arr[i][j]=='B'){
                    found=1;
                    break;
                }
            }
        }
    }
    if(found==1)
        cout<<"1"<<endl;
    else
        cout<<"2"<<endl;    
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