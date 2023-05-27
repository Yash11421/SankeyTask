#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:"<<endl;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		
		int j=1;
		while(j<=n-i+1)
		{
			cout<<j<<" ";
			j=j+1;			
		}
		int star=2*i-2;
		while(star)
		{
			cout<<'*'<<" ";
			star=star-1;
		}
	
		int j1=1;
		int n1=n-i+1;
		while(n1)
		{
			cout<<n1<<" ";
			n1=n1-1;
			j1=j1+1;
		}
		
		cout<<endl;
	    i=i+1;
	}
	
}
