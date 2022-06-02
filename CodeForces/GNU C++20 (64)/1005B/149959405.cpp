// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // /*I_Am_A_Noob*/
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // //#include<bits/stdc++.h>
// // #include<iostream>
// // #include<string>
// // #include<algorithm>
// // #include<iterator>
// // #include <array>
// // #include<vector>
// // #include<set>
// // #include<map>
// // #include<unordered_map>
// // #include<unordered_set>
// // #include<list>
// // #include<stack>
// // #include<queue>
// // #include<deque>
// // #include<math.h>
// // #include<cmath>
// // #include<bitset>
// // #include<iomanip>
// // #include<numeric>
// // #include<climits>
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // #define ll long long
// // #define MOD 1000000007
// // #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// // //#define for(z,x,y) for(int i=z;i<x;i+=y)
// // #define pb push_back
// // #define eb emplace_back
// // #define ppb pop_back
// // #define endl "\n"
// // #define int long long int
// // #define all(x) (x).begin(), (x).end()
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // #define vi vector<int>
// // #define vs vector<string>
// // #define vb vector<bool>
// // #define vvi vector<vector<int>>
// // #define pii pair<int, int>
// // #define vpii vector<pair<int, int>>
// // #define si set<int>
// // #define mii map<int, int>
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // bool revsort(ll a, ll b) {return a > b;}
// // void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
// // void swap(char &x,char&y) {char temp= x; x=y; y=temp;}
// // ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // int ans,temp,sum;
// // using namespace std;

// // void solve(){
// //     string s1,s2;
// //     cin>>s1>>s2;
// //     // reverse(s1.begin(),s1.end());
// //     // reverse(s1.begin(),s2.end());
// //     cout<<s1<<endl<<s2<<endl;
// //     int lena=s1.length();
// //     int lenb=s2.length();
// //     int n=min(lena,lenb);
// //     int m=max(lena,lenb);
// //     int ctr=0;
// //         if(s1==s2){
// //             cout<<ctr<<endl;
// //             return;
// //         }
// //     for(int i=n-1,j=m-1;j>=0;j--){
// //         // if(s2[j]!=s1[i]){
// //             if(s1.length()>s2.length()){
// //                 s1.pop_back();
// //                 ctr++;
// //             }
// //             else if(s1.length()<s2.length()){
// //                 s2.pop_back();
// //                 ctr++;
// //             }
// //             else{
// //                 s1.pop_back();
// //                 s2.pop_back();
// //                 ctr+=2;
// //             }
// //         // }
// //         // else if(s2[j]==s1[j]){
// //             // if(s1[0]!=s2[0]){
// //                 // cout<<s1.length()+s2.length()<<endl;
// //                 // cout<<ctr<<return;
// //                 // return;
// //             // }
// //         // }
// //     }
// //     cout<<ctr;
// // cout<<endl;
// // }

// // int32_t main()
// // {
// //     fastio();
// //     int t=1;
// //     // cin>>t;
// //     while(t--){
// //     solve();
// //     }
// // return 0;
// // }
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
// #include<cmath>
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
//     // string temp1,temp2;
//     // cin>>temp1>>temp2;
//     string s1,s2;
//     cin>>s1>>s2;
//     // if(temp1>=temp2){
//     //     s1=temp1;
//     //     s2=temp2;
//     // }
//     // else{
//     //     s1==temp2;
//     //     s2==temp1;
//     // }
//     if(s1.length()<s2.length()){
//         string temp=s1;
//         s1=s2;
//         s2=temp;
//     }
//     int m=s1.length();
//     int n=s2.length();
//     int i=s1.length()-1;
//     int j=s2.length()-1;
//     if(s1[m-1]!=s2[n-1]&&s1[0]!=s2[0]){
//         cout<<s1.length()+s2.length();
//         return;
//     }
//     // int ctr=0;
//     while(1){
//         cout<<"entered 171"<<endl;
//         if(i==0||j==0)
//             break;
//         else if(s1[i]==s2[j]){
//             i--;
//             j--;
//             // ctr+=2;
//         }
//     }
//     // int ctr=0;
//     // if(s1.length()>2&&i!=0)
//     //     ctr+=i;
//     // else
//     //     ctr++;
//     // if(s2.length()>2&&j!=0)
//     //     ctr+=j;
//     // else
//     //     ctr++;
//     // if(j!=0)
//     cout<<n-i<<endl;
//     cout<<m-j<<endl;
//     cout<<abs((m-(j))-(n-(i)))<<endl;
//     // cout<<ctr<<endl;
//     // cout<<ctr<<endl;
//     for(int k=0;k<=i;k++)
//         cout<<s1[k];
//     cout<<endl;
//     for(int k=0;k<=j;k++)
//         cout<<s2[k];
// cout<<endl;
// }

// int32_t main()
// {
//     fastio();
//     int t=1;
//     // cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
/*---------------------------------------------------------------------------------------------------------------------------*/
/*I_Am_A_Noob*/
/*---------------------------------------------------------------------------------------------------------------------------*/
//#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<iterator>
#include <array>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<math.h>
#include<cmath>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>
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
    string s,t;
    cin>>s>>t;
    int i,j,k,n;
    n=min(s.length(),t.length());
    int cnt=0;

    j=s.length()-1;
    k=t.length()-1;

    while(n--)
    {
        if(s[j]==t[k])
            cnt++, k--, j--;
        else
            break;
    }

    int ans=(s.length()-cnt)+(t.length()-cnt);
    cout<<ans;
cout<<endl;
}

int32_t main()
{
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}