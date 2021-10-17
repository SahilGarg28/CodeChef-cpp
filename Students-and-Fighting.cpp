#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    int arr[n];
	    cin>>arr[0];
	    int max=arr[0];
	    for(int i=1;i<n;i++)
	    {   
	        cin>>arr[i];
	        if(arr[i]>max)
	        max=arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==max)
	        {
	        count++;
	        if(count==2)
	        break;
	        }
	    }
	    if(count!=1)
	    {
	        cout<<"fight:("<<endl;
	    }
	    else
	    {
	        cout<<"peace:)"<<endl;
	    }
	    
	}
	return 0;
}
