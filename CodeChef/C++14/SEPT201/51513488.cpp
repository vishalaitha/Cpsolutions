#include <iostream>
using namespace std;
int main() {
	int t,arr[50],count=1;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>arr[i];
	}
	for(int i=1;i<t;i++)
	{
	    bool tr=1;
	    for(int j=0;j<i;j++)
	    {
	        if(arr[j]>arr[i])
	            {
	                tr=0;
	                break;
	            }
	    }
	    if(tr==1) count++;
	}
	cout<<count<<endl;
	return 0;
}
