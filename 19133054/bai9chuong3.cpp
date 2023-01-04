//chuong3. bai 9

#include<iostream>
using namespace std;
#define SIZE 100
void xuat(int A[], int n);
void nhap(int A[], int &n);
void doiCho(int &a, int &b);
void sapXepGiamDan(int A[], int n);
void chenPhanTu(int A[], int &n, int x, int k);
void nhapPT(int &x);
int timViTriK(int A[], int n, int x);
int main()
{
	int A[SIZE];
	int n,x;
	nhap(A,n);
	sapXepGiamDan(A,n);
	nhapPT(x);
	int k = timViTriK(A,n,x);
	chenPhanTu(A,n,x,k);
	xuat(A,n);
}
void chenPhanTu(int A[], int &n, int x, int k)
{
	for(int i = n; i>k; i--)
		A[i]=A[i-1];
	A[k] = x;
	n++;
}
int timViTriK(int A[], int n, int x)
{
	int k;
	for(int i = 0; i<n-1; i++)
		for(int j = 1; j<i+1; j++)
			if(A[i]>x && A[j]<x)
				k = j;
	return k;
}
void sapXepGiamDan(int A[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(A[i]<A[j])
				doiCho(A[i],A[j]);
}
void doiCho(int &a, int &b)
{
	int t = a;
	a = b;
	b = t;
}
void nhapPT(int &x)
{
	cin>>x;
}
void xuat(int A[], int n)
{
	cout<<"=================="<<endl;
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
}
void nhap(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>A[i];
}