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
    cin>>n;
    vector<int>v;
    int index=-1;
    int first_max=INT_MIN;
    int second_max=first_max;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
        if(temp>=first_max){
            second_max=first_max;
            first_max=temp;
            index=i;
        }
        else if(temp>=second_max){
            second_max=temp;
        }
    }
    cout<<index+1<<" "<<second_max<<endl;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}