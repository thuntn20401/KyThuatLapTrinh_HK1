#include<iostream>
#define SIZE 50
using namespace std;
int dem = 0;
void sinhNhiPhan(int n);
void xuat(int A[], int n);
int main()
{
	int n;
	cin>>n;
	sinhNhiPhan(n);
	cout<<dem;
}
void sinhNhiPhan(int n)
{
	int A[SIZE] = {0};
	int i;
	do
	{
		i = n-1;
		xuat(A,n);
		while(i>=0 && A[i] == 1)
		{
			A[i] = 0;
			i--;
		}	
			
		if(i>=0)
			A[i] = 1;
	}while(i>=0);
}
void xuat(int A[], int n)
{
	dem++;
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}