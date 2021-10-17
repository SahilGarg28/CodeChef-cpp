#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int countl=0,countr=0,n;
	    cin>>n;
    	char brac[n];
    	cin>>brac;
    	for(int i=0;i<n;i++)
    	{   
    	    if(brac[i]=='(')
    	    countr++;
    	    else 
    	    {if(brac[i]==')')
    	    countl++;
    	    }
	    }
	    int len;
	    if(countr<=countl)
	    len=countr;
	    else
	    len=countl;
	    cout<<2*len<<endl;
	    
	}
	return 0;
}
