/*I_Am_A_Noob*/

#include<bits/stdc++.h>
#include<iostream>
#include<array>
#include<string>
#include<algorithm>
#include<iterator>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<list>
#include<stack>
#include<queue>
#include<math.h>
#include<bitset>
#include<iomanip>
#include<numeric>
#include<climits>

#define ll long long
#define MOD 1000000007
#define _z ios_base ::sync_with_stdio(false);cin.tie(nullptr)
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char>
//#define for(z,x,y) for(int i=z;i<x;i+=y)
#define pb push_back
#define eb emplace_back
#define ppb pop_back
#define endl "\n"
// #define int long long int

int ans,temp,sum;
using namespace std;

// int binarySearch(vector<int>arr, int l, int r, int x)
// {
//     if (r>=l)
//     {
//         int mid = l + (r - l)/2;
//         if (arr[mid] == x)
//             return mid;
//         if (arr[mid] > x)
//             return binarySearch(arr, l, mid-1, x);
//         return binarySearch(arr, mid+1, r, x);
//     }
//     return -1;
// }

void solve(){
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>temp;
        v[i]=temp;
    }
    sort(v,v+n);
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int temp;
        cin>>temp;
        cout<<upper_bound(v,v+n,temp)-v<<endl;
    }
}

int32_t main()
{
    _z;
    int t=1;
    // cin>>t;
    while(t--){
    solve();
    }
return 0;
}