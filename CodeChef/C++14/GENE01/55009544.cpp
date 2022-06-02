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
    char a,b;
    cin>>a>>b;
    //brown is most common R
    //blue is intermediate B
    //green is rarest G
    if(a==b)
        cout<<a;
    else if(a=='R'||b=='R')
        cout<<"R";
    else if(a=='B'||b=='B')
        cout<<"B";
    else
        cout<<"G";
    // else if((a=='R'&&b=='G')||(a=='G'&&b=='R'))
    //     cout<<"R";
    // else if((a=='R'&&b=='B')||(a=='B'&&b=='R'))
    //     cout<<"G";
    
    
    return 0;
}