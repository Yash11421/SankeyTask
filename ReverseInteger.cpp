#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the Number:";
	cin>>n;
	while(n!=0)
	{
		int Nextnum=n%10;
		cout<<Nextnum<<"";
		n=n/10;
		
	}
	
}
