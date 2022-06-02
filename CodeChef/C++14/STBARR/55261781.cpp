#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here1`
	int t;
	cin>>t;
	while(t--){
	    int n,max=INT_MIN;
	    bool isequal=1;
	    int elem;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
            if(max<v[i])
                max=v[i];
            if(i==0)
                elem=v[i];
            if(elem!=v[i])
                isequal=0;
	    }
	    if(isequal==1)
	        cout<<"0"<<endl;
	   else if(max==v[n-1]) cout<<"1"<<endl;
	   else cout<<"2"<<endl;
	}
	return 0;
}
