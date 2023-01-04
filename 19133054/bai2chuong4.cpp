//bai 2

#include<iostream>
#define SIZE 100
using namespace std;
int tinhTong(int A[], int n);
void xuat(int kq);
void nhap(int A[], int &n);
int main()
{
	int n;
	int A[SIZE];
	nhap(A,n);
	int t = tinhTong(A,n);
	xuat(t);
}
int tinhTong(int A[], int n)
{
	if(n==1)
		return A[0];
	else
		return A[n-1] + tinhTong(A,n-1);
}
void xuat(int kq)
{
	cout<<kq;
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>A[i];
}
