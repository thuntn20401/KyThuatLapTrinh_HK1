//chuong 2. bai 3
//thu tuc them xoa sua ptu trong mang

#include<iostream>
using namespace std;
bool timKiemX(int A[], int n, int x);
void xuatMang(int A[], int n);
void nhap(int &x);
void nhapMang(int A[], int &n);
void xuat(bool co);
void themVaoMang(int A[],int &n, int x, int k);
void xoaViTriK(int A[], int &n, int k);
int main()
{
	int A[100];
	int n,x,k;
	nhapMang(A,n);
	
	/*cout<<"Nhap x: ";
	nhap(x);
	cout<<"Nhap vi tri can them k = "; them phan tu vao mang
	nhap(k);
	themVaoMang(A,n,x,k);
	xuatMang(A,n);*/
	
	//bool co = timKiemX(A,n,x); // tim pt co xuat hien hay khong
	//xuat(co);	
	cout<<"Nhap vi tri can xoa k = "; //xoa ptu vi tri k
	nhap(k);
	xoaViTriK(A,n,k);
	xuatMang(A,n);
	
	return 0;
}
void xoaViTriK(int A[], int &n, int k)
{
	for(int i = k; i<n-1; i++)
		A[i] = A[i+1];
	n--;
}

void themVaoMang(int A[],int &n, int x, int k)
{
	for(int i = n-1; i>=k; i--)
		A[i+1] = A[i];
	A[k] = x;
	n++;
}
bool timKiemX(int A[], int n, int x)
{
	for(int i = 0; i<n; i++)
		if(A[i]==x)
			return true;
	return false;
}
void xuat(bool co)
{
	if(co)
		cout<<"Tim thay!";
	else
		cout<<"Khong tim thay!";
}
void xuatMang(int A[], int n)
{
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
}
void nhap(int &x)
{
	cin>>x;
}
void nhapMang(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		nhap(A[i]);
}
