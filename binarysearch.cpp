using namespace std;
#include<bits/stdc++.h>
int binary(int beg,int end,int x,int a[])
{
	int mid;
	while(end>beg)
	{
	mid=(beg+end)/2;
	if(a[mid]==x)
	{
	return mid;	
	}
	else if(x<a[mid])
	{
		end=mid-1;
	}
	else if(x>a[mid])
	{
		beg=mid+1;
	}
}
	return -1;
}
int main()
{
	int i,n,x,j,temp,k;
	cin>>n;
	int a[n];
	k=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the element to be searched  ";
	cin>>x;
	for(i=0;i<n-1;i++)//bubble sort
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	/*	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}*/
	int pos=binary(k,(n-1),x,a);
	if(pos==-1)
	{
		cout<<"element not found\n";
	}
	else
	{
		cout<<"element found ";
	}
}
