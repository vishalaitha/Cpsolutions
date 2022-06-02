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
set<char>vowels={'a','e','i','o','u'};
bool is_vowel(char temp){
    return vowels.count(temp);
}
void solve(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    string s1,s2;
    cin>>s1>>s2;
    for(char c='a';c<'z';c++){
        int curr=0;
        for(int i=0;i<n;i++){
            char si=(s1[i]=='?'?c:s1[i]);
            char pi=(s2[i]=='?'?c:s2[i]);
            if(si==pi)
                continue;
            curr+=(is_vowel(si)!=is_vowel(pi)?1:2);
            }
            ans=min(ans,curr);
        }
        cout<<ans<<"\n";
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