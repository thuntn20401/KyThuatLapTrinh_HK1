// tim so nho nhat mang bang de quy

#include<iostream>
#define SIZE 100
using namespace std;

void nhap( int &n);
void xuat(int kq);
int timMin(int n);
int A[SIZE];
int main()
{
	int A[SIZE], n;
	nhap(n);
	int max = timMin(n);
	xuat(max);
	return 0;
	
}
int timMin(int n)
{
	if(n==1)
		return A[0];
	else
	{
		int x = timMin(n-1);
		if(A[n-1] < x)
			return A[n-1];
		else
			return x;
	}
		
}
void nhap(int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>A[i];
}
void xuat(int kq)
{
	cout<<kq;
}