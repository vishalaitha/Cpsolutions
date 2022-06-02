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
#define all(x) begin(x), end(x)
#define MOD 1000000007
using namespace std;
void solve(){
 string s, temp;
        cin >> s;
        temp = s;
        sort(all(temp));
        string b, c="";
        b = temp[0];
        bool f = 1;
        for(auto x : s){
            if(f && x==b[0]) f = 0;
            else c+=x;
        }
        
        cout << b << " " << c << endl;
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