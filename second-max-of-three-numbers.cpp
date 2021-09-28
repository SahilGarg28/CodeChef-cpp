#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,a,b,c;
	cin>>T;
	while(T--)
	{   cin>>a>>b>>c;
	    if((a>b&&a<c)||(a<b&&a>c))
	    cout<<a<<endl;
	    else if((b>a&&b<c)||(b<a&&b>c))
	    cout<<b<<endl;
	    else if((c>a&&c<b)||(c<a&&c>b))
	    cout<<c<<endl;
	}
	return 0;
}
