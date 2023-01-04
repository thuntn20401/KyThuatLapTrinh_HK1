//tim phan tu x trong mang bang linh canh
//chuong 2. bai 1

#include<iostream>
using namespace std;

void xuatMang(int A[], int n);
void nhapMang(int A[], int &n);
int timPTuXTrongMang(int A[], int n, int x);
void nhap(int &x);
void xuat(int co);

int main()
{
	int A[100];
	int n,x;
	nhapMang(A,n);
	nhap(x);
	int co = timPTuXTrongMang(A,n,x);
	//xuatMang(A,n);
	xuat(co);
	return 0;
}
int timPTuXTrongMang(int A[], int n, int x)
{
	A[n] = x;
	int i = 0;
	while(A[i]!=x)
		i++;
	if(i<n)
		return 1;
	else
		return 0;
}
void xuat(int co)
{
	if(co == 1)
		cout<<"Tim thay";
	else
		cout<<"Khong tim thay!";
	
}
void nhap(int &x)
{
	cin>>x;
}


void xuatMang(int A[], int n)
{
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
}
void nhapMang(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhap(A[i]);
}
