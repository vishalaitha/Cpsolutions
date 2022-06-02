#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ptr=0;
		for(int i=1;i<n;i++){
			if(s[i]>s[i-1])
				break;
				ptr++;
				
		}
		if(n==1||s[0]==s[1]){
			cout<<s[0]<<s[0]<<endl;
			continue;
		}
		string ans=s.substr(0,ptr+1);
		cout<<ans;
		reverse(ans.begin(),ans.end());
		cout<<ans;
		cout<<endl;
	}
	return 0;
}