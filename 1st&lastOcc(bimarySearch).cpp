#include<iostream>
using namespace std;

int Firstocc(int arr[],int n,int key)
{
	int s=0, e=n-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			e=mid-1;	
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
		
	}
	return ans;
	
	
}
int Lastocc(int arr[],int n,int key)
{
	int s=0,e=n-1,ans=-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else if(arr[mid]<key)
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	return ans;
	
}




int main()
{
	int key;
	cout<<"Enter the value whose 1st and last occurrence you want to find from the array:"<<endl;
	cin>>key;
	int arr[10]={1,4,5,7,9,3,3,3,4,4};
	int firstOccurrence=Firstocc(arr,11,key);
	int lastOccurrence=Lastocc(arr,11,key);
	cout<<"The 1st occurrence of "<<key<<" is "<<firstOccurrence<<endl;
	cout<<"The last occurrence of "<<key<<" is "<<lastOccurrence<<endl;
	
	return 0;
}
