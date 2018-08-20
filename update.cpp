#include<iostream>
using namespace std;
int main()
{
	int n,a[20],b[20];
	cout<<"total element"<<endl;
	cin>>n;
	cout<<"element of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<a[0]*a[1]<<",";
	for(int i=1;i<n-1;i++)
	{
		b[i]=a[i-1]*a[i+1];
		cout<<b[i]<<",";
	}
	cout<<a[n-2]*a[n-1];
}
