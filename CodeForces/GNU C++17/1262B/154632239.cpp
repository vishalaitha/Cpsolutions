#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define vi vector<int>
#define mpii map<int,int>
	#define pb push_back
void solve( ){
	int n;cin>>n;
	vi v(n);
	mpii mp;
	for(int i=0;i<n;i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	vi duplicate(v.begin(),v.end());
	sort(duplicate.begin( ),duplicate.end( ));
	if(v!=duplicate){
		cout<<-1<<endl;
		return;
	}
	vi what_to_be_added;
	for(int i=1;i<=n;i++){
		if(mp.count(i)==0){
			what_to_be_added.push_back(i);
		}
	}
	vi new_array(n);
	new_array[0]=v[0];
	for(int i=1;i<n;i++){
		if(v[i]!=v[i-1])
		new_array[i]=v[i];
	}
	int j=0;
	//cout<<endl;
	for(int i=0;i<n;i++){
		if(new_array[i]==0){
			new_array[i]=what_to_be_added[j];
			j++;
		}
	}
	vi prefsums_new_array;
	int prev=INT_MIN;
	for(auto it:new_array){
			if(it>prev){
				prev=it;
			}
		prefsums_new_array.pb(prev);
	}
	// for(auto it:new_array)
	// 	cout<<it<<" ";
	// 	cout<<endl;
	// for(auto it:prefsums_new_array)
	// 	cout<<it<<" ";
	// cout<<endl;
	// for(auto it:v)
	// 	cout<<it<<" ";
	// cout<<endl;
	if(prefsums_new_array==v){
		for(auto it:new_array){
		cout<<it<<" ";
		}	
		cout<<endl;	
	}
	else{
		cout<<"-1"<<endl;
	}
}
int32_t main( ) {
	// your code goes here
	int t=1;
	cin>>t;
	while(t--){
		solve()	;
	}
	return 0;
}