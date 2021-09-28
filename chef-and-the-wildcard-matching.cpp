#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	string x,y;
	while(T--)
	{   int count=0;
	   cin>>x>>y;
	   if(x.size()==y.size())
	   {
	   for(int i=0;i<x.size();i++)
	   {
	       if(x[i]==y[i]||x[i]=='?'||y[i]=='?')
	       {
	           count++;
	       }
	   }
	   if(count==x.size())
	   {
	       cout<<"Yes"<<endl;
	   }
	   else
	   {
	       cout<<"No"<<endl;
	   }
	   
	   }
	   else
	   cout<<"No"<<endl;
	}
	return 0;
}
