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
#include<climits>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
    string s;
    bool wefoundeven=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        int temp=s[i]-'0';
        if(temp%2==0){
            wefoundeven=1;
            break;
        }
    }
    if(wefoundeven==0){
        cout<<"-1"<<endl;
        return;
    }
    if(s[s.length()-1]%2==0){
        cout<<"0"<<endl;
        return;
    }
    else if(s[0]%2==0){
        cout<<"1"<<endl;
        return;
    }
    else{
        cout<<"2"<<endl;
        return;
    }
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