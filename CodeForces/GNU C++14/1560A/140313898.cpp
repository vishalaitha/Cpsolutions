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
int main()
{
    vector<int>v;
    int size=1000;
    int i=0;
    while(size){
        if(i%3==0||i%10==3){
            i++;
            continue;
        }
        else{
            v.push_back(i);
            size--;
        }
        i++;
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<v[k-1]<<endl;
    }
return 0;
}