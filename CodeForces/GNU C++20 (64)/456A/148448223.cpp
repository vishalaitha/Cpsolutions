#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    bool isgreater1=0;
    bool isgreater2=0;
        for(int i=0;i<n;i++){
            if(v[i].first<v[i].second&&isgreater1==0)            
                isgreater1=1;
            if(v[i].first>v[i].second&&isgreater2==0)
                isgreater2=1;
       }
       if(isgreater1==1&&isgreater2==1)
        cout<<"Happy Alex";
        else
        cout<<"Poor Alex";
}