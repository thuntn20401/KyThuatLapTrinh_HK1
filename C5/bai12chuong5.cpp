//Bai 12
#include<iostream>
#define SIZE 20
using namespace std;
int dem = 0;
void xuat(int A[], int n);
void doiCho(int &x, int &y);
void latNguoc(int A[], int x, int y);
void sinhHoanVi(int n);


int main()
{
	int n;
	cin>>n;
	sinhHoanVi(n);
	cout<<dem;
	return 0;
}
void sinhHoanVi(int n)
{
	int A[SIZE];
	for(int i = 0; i<n; i++)
		A[i] = i;
	xuat(A,n);
	do
	{
		int k = n-2;
		while(k>=0 && A[k]>A[k+1])
			k--;
		if(k<0)
			break;
		int l = n-1;
		while(A[l] < A[k])
			l--;
		doiCho(A[k],A[l]);
		latNguoc(A,k+1,n-1);
		xuat(A,n);
	}while(true);
}
void latNguoc(int A[], int x, int y)
{
	while(x<y)
	{
		doiCho(A[x],A[y]);
		x++;
		y--;
	}
}
void doiCho(int &x, int &y)
{
	int t = x;
	x = y;
	y = t;
}
void xuat(int A[], int n)
{
	dem ++;
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}