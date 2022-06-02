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
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int arr[7];
        for(int i=0;i<7;i++){
            cin>>arr[i];
        }
        int a,b,c;
        a=arr[0];
        b=arr[1];
        c=arr[6]-(arr[0]+arr[1]);
        cout<<a<<" "<<b<<" "<<c<<endl;

    }

    return 0;
}