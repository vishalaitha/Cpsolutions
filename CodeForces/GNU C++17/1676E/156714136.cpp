// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // // Author : I_Am_A_Noob
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // #include<bits/stdc++.h>
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // //constants and typedefs
// // #define int long long int
// // #define MOD 1000000007
// // #define epsilon = 0.0000001f
// // #define PI 3.141592653589793238462
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // //operations on containers
// // #define pb push_back
// // #define ppb pop_back
// // #define ff first
// // #define ss second
// // #define all(x) (x).begin(), (x).end()
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // //general operations
// // #define endl "\n"
// // #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// // #define debug(x) cout << #x << ": " << x << endl
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // //templates
// // //template <class T> void _print(vector <T> v);
// // //template <class T> void _print(set <T> v);
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // #define vi vector<int>
// // #define vpii vector<pair<int, int>>
// // #define vs vector<string>
// // #define vb vector<bool>
// // #define vvi vector<vector<int>>
// // #define pii pair<int, int>
// // #define si set<int>
// // #define mpii map<int, int>
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // // ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // int ans,temp,sum;
// // using namespace std;
// // void _print(long long t) {cout << t;}
// // template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
// // void solve(){
// //     int n;
// //     cin>>n;
// //     int k;
// //     cin>>k;
// //     vi v(n);
// //     mpii mp1,mp2;
// //     for(int i=0;i<n;i++){
// //        cin>>v[i];
// //        mp1[v[i]]++;
// //     }
// //     for(auto it:mp1){
// //         if(it.second>=k){
// //             mp2[it.first]++;
// //         }
// //     }
// //     if(mp2.size()<=1){
// //         cout<<"-1"<<endl;
// //     }
// //     else
// //     cout<<mp2.begin()->first<<" "<<mp2.rbegin()->first<<endl;
// // }
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// // int32_t main()
// // {
// // #ifndef ONLINE_JUDGE
// // freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r" --------------------------------------------
// // freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w" ----------------------------------------
// // #endif
// //     fastio();
// //     int t=1;
// //     cin>>t;
// //     while(t--){
// //     solve();
// //     }
// // return 0;
// // }
// // /*---------------------------------------------------------------------------------------------------------------------------*/
// ---------------------------------------------------------------------------------------------------------------------------
// // Author : I_Am_A_Noob
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #include<bits/stdc++.h>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //constants and typedefs
// #define int long long int
// #define MOD 1000000007
// #define epsilon = 0.0000001f
// #define PI 3.141592653589793238462
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //operations on containers
// #define pb push_back
// #define ppb pop_back
// #define ff first
// #define ss second
// #define all(x) (x).begin(), (x).end()
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //general operations
// #define endl "\n"
// #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// #define debug(x) cout << #x << ": " << x << endl
// /*---------------------------------------------------------------------------------------------------------------------------*/
// //templates
// //template <class T> void _print(vector <T> v);
// //template <class T> void _print(set <T> v);
// /*---------------------------------------------------------------------------------------------------------------------------*/
// #define vi vector<int>
// #define vpii vector<pair<int, int>>
// #define vs vector<string>
// #define vb vector<bool>
// #define vvi vector<vector<int>>
// #define pii pair<int, int>
// #define si set<int>
// #define mpii map<int, int>
// /*---------------------------------------------------------------------------------------------------------------------------*/
// // ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
// /*---------------------------------------------------------------------------------------------------------------------------*/
// int ans,temp,sum;
// using namespace std;
// void _print(long long t) {cout << t;}
// template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
// void solve(){
//     int n,m;
//     cin>>n>>m;
//     int arr[300][300]={0};

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int arr1[206][206];
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             arr1[i][j]=arr[i][j]+arr[i-1][j-1];
//         }
//     }
//     int arr2[206][206];
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             arr2[i][j]=arr[i-1][j+1]+arr[i][j];
//         }
//     }
//     int maxi=INT_MIN;
//     int arr3[205][205];
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=m;j++){
//             cout<<arr[]
//         }
//     }
//     cout<<maxi<<endl;
// cout<<endl;
// }
// /*---------------------------------------------------------------------------------------------------------------------------*/
// int32_t main()
// {
// #ifndef ONLINE_JUDGE
// freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r" --------------------------------------------
// freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w" ----------------------------------------
// #endif
//     fastio();
//     int t=1;
//     cin>>t;
//     while(t--){
//     solve();
//     }
// return 0;
// }
// /*---------------------------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------*/
// Author : I_Am_A_Noob
/*---------------------------------------------------------------------------------------------------------------------------*/
#include<bits/stdc++.h>
/*---------------------------------------------------------------------------------------------------------------------------*/
//constants and typedefs
#define int long long int
#define MOD 1000000007
#define epsilon = 0.0000001f
#define PI 3.141592653589793238462
/*---------------------------------------------------------------------------------------------------------------------------*/
//operations on containers
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
/*---------------------------------------------------------------------------------------------------------------------------*/
//general operations
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define debug(x) cout << #x << ": " << x << endl
/*---------------------------------------------------------------------------------------------------------------------------*/
//templates
//template <class T> void _print(vector <T> v);
//template <class T> void _print(set <T> v);
/*---------------------------------------------------------------------------------------------------------------------------*/
#define vi vector<int>
#define vpii vector<pair<int, int>>
#define vs vector<string>
#define vb vector<bool>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define si set<int>
#define mpii map<int, int>
/*---------------------------------------------------------------------------------------------------------------------------*/
// ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
/*---------------------------------------------------------------------------------------------------------------------------*/
int ans,temp,sum;
using namespace std;
void _print(long long t) {cout << t;}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
void solve(){
    int n,q;
    cin>>n>>q;
    vi v(n+1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    // _print(v);
    // cout<<endl;
    int maxi=*max_element(v.begin(),v.end());
    // _print(v);
    set<pair<int,int>>s;
    int i=0;
    for(auto it:v){
        s.insert({it,i});
        i++;
    }
    while(q--){
        int temp;
        cin>>temp;
        auto it1=s.lower_bound({temp,0});
        auto it2=s.lower_bound({0,n-1});
        if(temp>maxi){
            cout<<-1<<" "<<endl;
        }
        else{
            cout<<it1->second+1<<endl;
        }
    }
cout<<endl;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
int32_t main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r" --------------------------------------------
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w" ----------------------------------------
#endif
    fastio();
    int t=1;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
/*---------------------------------------------------------------------------------------------------------------------------*/