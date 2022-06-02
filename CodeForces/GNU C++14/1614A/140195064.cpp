#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,l,r,k,quant=0;
        vector<ll>v;
        cin>>n>>l>>r>>k;
            for(ll i=0;i<n;i++){
                ll temp;
                cin>>temp;
                v.push_back(temp);
            }
            sort(v.begin(),v.end());
            for(ll i=0;i<n;i++){
                if((v[i]>=l && v[i]<=r) && (v[i]<=k)){
                    quant++;
                    //cout<<v[i]<<endl;
                    k-=v[i];
                }
            }
            cout<<quant<<endl;
    }
}