#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0,j=0,max=0;
	    cin>>n;
	    int arr[n],temp,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        flag=0;
	        if(temp%2!=0)
	        {
	            arr[j]=count;
	            if(arr[j]>max)
	            max=arr[j];
	            j++;
	            count=0;
	            flag=1;
	        }
	        if(flag==0)
	        count++;
	        
	    }
	    if(temp%2==0)
	    {
	        if(count>max)
	        max=count;
	        
	    }
	    cout<<max<<endl;
	}
	return 0;
}
