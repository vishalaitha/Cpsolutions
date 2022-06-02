#include <iostream>
using namespace std;
void solve(void)
{
    int no,rem,revnum;
    cin>>no;
    int a,b;
    a=no%10;
    while(no!=0)    
  {    
     rem=no%10;      
     revnum=revnum*10+rem;    
     no/=10;    
  }   
  b=revnum%10;
  if(a+b>=5)
    cout<<"Yes\n";
    else
    cout<<"No\n";
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	solve();
	}
	return 0;
}
