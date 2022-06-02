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
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='?'){
            if(i==0){
                if(s[i+1]=='a')
                    s[i]='b';
                else if(s[i+1]=='b')
                    s[i]='c';
                else
                    s[i]='a';
            }
            else if(i==s.length()-1){
                if(s[i-1]=='a')
                    s[i]='b';
                else if(s[i-1]=='b')
                    s[i]='c';
                else
                    s[i]='a';
            }
            else{
                if(s[i-1]=='a'){
                    if(s[i+1]!='b')
                        s[i]='b';
                    else
                        s[i]='c';
                }
                else if(s[i-1]=='b'){
                    if(s[i+1]!='a')
                        s[i]='a';
                    else
                        s[i]='c';
                }
                else{
                    if(s[i+1]!='a')
                        s[i]='a';
                    else
                        s[i]='b';
                }

            }
        }
        else
        continue;
    }
    bool isnot=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            isnot=1;
            break;
        }
    }
    if(isnot==1)
        cout<<"-1";
    else
        cout<<s;
    
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