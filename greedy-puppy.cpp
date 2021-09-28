#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,n,k,d=0;
	cin>>T;
	while(T--)
	{
	    cin>>n>>k;
	    for (int i=2;i<=k;i++){
			if(d<n%i)
				d=n%i;
	    }
	    cout<<d<<endl;
	    d=0;
	}
	return 0;
}
