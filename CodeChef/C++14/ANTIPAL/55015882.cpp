#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n%2!=0){
	        cout<<"-1";
	    }
	    else{
	        for(int i=0;i<n;i++){
	            if(i%2==0)
	            cout<<"1";
	            else cout<<"0";
	        }
	    }
	        cout<<endl;
	}
	return 0;
}
