#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    int matches=1;
    if(x>y){
    while(y--){
        if(matches*2+y==x){
            cout<<matches<<endl;
            break;
        }
        matches++;
        }
    }
    else{
        cout<<"0"<<"\n";
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