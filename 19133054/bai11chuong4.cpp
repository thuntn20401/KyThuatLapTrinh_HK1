//bai 11
#include<iostream>
#define SIZE 100
using namespace std;
int A[SIZE], n,dem;

void xuat();
void lietKeNP(int k);
int main()
{
	cin>>n;
	dem=0;
	lietKeNP(0);
	cout<<dem;
}
void lietKeNP(int k)
{
	if(k==n)
		xuat();
	else
	{
		for(int i = 0; i<=1; i++)
		{
			A[k] = i;
			lietKeNP(k+1);
		}
	}
}
void xuat()
{
	dem++;
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}