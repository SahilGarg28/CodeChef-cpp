#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,n;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x>>y;
	    int count=0;
	    int ary[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ary[i];
	        if(ary[i]<=x&&ary[i]%y==0)
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
