// //#include<bits/stdc++.h>
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
// #include<climits>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         string main;
//         cin>>main;
//         int n=main.length();
//         string temp1,temp2;
//         //cin>>temp1,temp2;
//         for(int i=0;i<n/2;i++){
//             temp1=temp1+main[i];
//         }
//         for(int i=n/2;i<n;i++){
//             temp2=temp2+main[i];
//         }
//         if(temp1==temp2)
//             cout<<"YES"<<endl;
//         else 
//             cout<<"NO"<<endl;
//     }

//     return 0;
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
#include<climits>
#define ll long long
using namespace std;
int countSC(int N)
{
    int res = (int)sqrt(N) + (int)cbrt(N)
              - (int)(sqrt(cbrt(N)));
 
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
    int count=countSC(n);
        cout<<count<<endl;
    }
    return 0;
}