#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); //file input.txt is opened in reading mode i.e "r"
freopen("output.txt","w",stdout);  //file output.txt is opened in writing mode i.e "w"
#endif
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		string s; cin>>s;
		int firstoccurance=-1; int lastoccurance=-1;
		for(int i=0;i<n;i++){
			if(s[i]=='*'&&firstoccurance==-1){
				firstoccurance=i;	
				lastoccurance=i;
			}
			else if(s[i]=='*'){
				lastoccurance=i;
			}
		}
		if(lastoccurance==firstoccurance||lastoccurance-firstoccurance<k){
			// cout<<"entered "<<firstoccurance<<" "<<lastoccurance<<" ";
			if(firstoccurance-lastoccurance==0)
			cout<<1<<endl;
			else{
				cout<<2<<endl;
			}
			continue;
		}
		int i=firstoccurance+1;
		int currentoccurance=firstoccurance;
		int ans=2;
		int laststar=firstoccurance;
		while(i<lastoccurance){
			if(s[i]=='*')
				laststar=i;
			if(i-currentoccurance>=k){
				ans++;
				currentoccurance=laststar;
			}
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}