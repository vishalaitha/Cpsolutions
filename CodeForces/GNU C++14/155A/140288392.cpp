// #include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<iterator>
// #include<vector>
// #include<set>
// #include<list>
// #include<stack>
// #include<queue>
// #include<math.h>
// #include<iomanip>
// #include<numeric>
// #include<climits>
// #define ll long long
// #define MOD 1000000007
// using namespace std;
// void solve(){
//     int n,ginandali,todie=0;
//     cin>>n>>ginandali;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int temp;
//         cin>>temp;
//         v.push_back(temp);
//         if(v[i]>todie)
//             todie++;
//     }
//     cout<<todie<<endl;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
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
    int n,score=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int maxi=v[0],mini=v[0];
    for(int i=1;i<n;i++){
        if(v[i]>maxi)
            score++;
        else if(v[i]<mini)
            score++;
        mini=min(mini,v[i]);
        maxi=max(maxi,v[i]);
    }
    cout<<score<<endl;

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
























