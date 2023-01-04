//bai 7

#include<iostream>
#define SIZE 100
using namespace std;

int timKiemNhiPhan(int A[], int trai, int phai, int x);
void nhap(int &x);
void nhapMang(int A[], int &n);
void doiCho(int &x, int &y);
void sapXep(int A[], int n);
void xuat(int kq);
void xuatMang(int A[], int n);

int main()
{
	int n,A[SIZE];
	nhapMang(A,n);
	sapXep(A,n);
	//xuatMang(A,n);
	int x;
	nhap(x);
	int trai = A[0];
	int phai = A[n-1];
	int kq = timKiemNhiPhan(A,trai,phai,x);
	xuat(kq);
}
int timKiemNhiPhan(int A[], int trai, int phai, int x)
{
	int giua;
	if(phai>=trai)
	{
		giua = (trai+phai)/2;
		if(A[giua] == x)
			return giua;
		if(A[giua]> x)
			return timKiemNhiPhan(A,trai,giua-1,x);
		return timKiemNhiPhan(A,giua+1,phai,x);
	}
	return -1;
}
void doiCho(int &x, int &y)
{
	int t = x;
	x = y; 
	y = t;
}
void sapXep(int A[], int n)
{
	for(int i = 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(A[i]>A[j])
				doiCho(A[i],A[j]);	
}
void nhap(int &x)
{
	cin>>x;
}
void nhapMang(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>A[i];
}
void xuatMang(int A[], int n)
{
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
}
void xuat(int kq)
{
	if(kq==-1)
		cout<<"khong tim thay";
	else
		cout<<kq;
}