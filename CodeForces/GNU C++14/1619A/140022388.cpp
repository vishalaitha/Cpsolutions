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
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string main;
        cin>>main;
        int n=main.length();
        string temp1,temp2;
        //cin>>temp1,temp2;
        for(int i=0;i<n/2;i++){
            temp1=temp1+main[i];
        }
        for(int i=n/2;i<n;i++){
            temp2=temp2+main[i];
        }
        if(temp1==temp2)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }

    return 0;
}