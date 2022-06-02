// /*---------------------------------------------------------------------------------------------------------------------------*/
// /*I_Am_A_Noob*/
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //#include<bits/stdc++.h>
// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<iterator>
// #include <array>
// #include<vector>
// #include<set>
// #include<map>
// #include<unordered_map>
// #include<unordered_set>
// #include<list>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<math.h>
// #include<bitset>
// #include<iomanip>
// #include<numeric>
// #include<climits>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define ll long long
// #define MOD 1000000007
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// //#define for(z,x,y) for(int i=z;i<x;i+=y)
// #define pb push_back
// #define eb emplace_back
// #define ppb pop_back
// #define endl "\n"
// #define int long long int
// #define all(x) (x).begin(), (x).end()
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define vi vector<int>
// #define vs vector<string>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define vpii vector<pair<int, int>>
// #define si set<int>
// #define mii map<int, int>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// bool revsort(ll a, ll b) {return a > b;}
// void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// /*---------------------------------------------------------------------------------------------------------------------------*/
// int ans,temp,sum;
// using namespace std;

// void solve(){
//     int a,b,x,y,ni;
//     cin>>a>>b>>x>>y>>ni;
//     // if(a>b){
//     //     int temp=b-y;
//     //     b-=min(temp,ni);
//     //     ni-=min(temp,ni);
//     //     a-=min(a-x,ni);
//     //     cout<<a*b<<endl;
//     // }
//     // else if(a==b){
//         if(a>=b){
//             // cout<<"x is "
//             // cout<<a<<" "<<b<<" "<<ni<<endl;
//             int prevb=b;
//             int temp=b-y;
//             b-=min(temp,ni);
//             // cout<<a<<" "<<b<<" "<<ni<<endl;
//             ni=ni-(min(temp,ni));
//             // cout<<a<<" "<<b<<" "<<ni<<endl;
//             a-=min(a-x,ni);
//             cout<<a*b<<endl;
//         }
//         else{
//             // cout<<a<<" "<<b<<endl;
//             int temp=a-x;
//             cout<<temp<<endl;
//             a-=min(temp,ni);
//             cout<<a<<endl;
//             ni-=min(temp,ni);
//             b-=min(b-y,ni);
//             cout<<a*b<<endl;
//         }
//     }
//     // else{
//     //     cout<<a<<" "<<b<<" "<<ni<<endl;
//     //         int temp=a-x;
//     //         a-=min(temp,ni);
//     //     cout<<a<<" "<<b<<" "<<ni<<endl;
//     //         ni-=min(temp,ni);
//     //     cout<<a<<" "<<b<<" "<<ni<<endl;
//     //         b-=min(b-y,ni);
//     //         cout<<a*b<<endl;
//     // }

// int32_t main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
// freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
// #endif
//     fastio();
//     int t=1;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
/*---------------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
/*---------------------------------------------------------------------------------------------------------------------------*/
#define ll long long
#define MOD 1000000007
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
//#define for(z,x,y) for(int i=z;i<x;i+=y)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define endl "\n"
#define int long long int
#define all(x) (x).begin(), (x).end()
/*---------------------------------------------------------------------------------------------------------------------------*/
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define si set<int>
#define mii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;

void solve(){
    int a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;
    int ans=a*b;
    for(int i=0;i<2;i++){
        int tempa=min(a-x,n);
        int tempb=min(n-tempa,b-y);
        ans=min(ans,(a-tempa)*(b-tempb));
        swap(a,b);
        swap(x,y);
    }
    cout<<ans;
cout<<endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
    fastio();
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}