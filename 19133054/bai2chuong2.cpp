//chuong 2. bai 2
//tim 1 so trong mang co thu tu (tim kiem nhi phan)

#include<iostream>
using namespace std;
void xuatMang(int A[], int n);
void nhap(int &x);
void nhapMang(int A[], int &n);
int timXTrongMangBangNhiPhan(int A[], int trai, int phai, int x);
void xuat(int vitri);
int main()
{
	int A[100];
	int n,x;
	nhapMang(A,n);
	nhap(x);
	int vitri = timXTrongMangBangNhiPhan(A,0,n-1,x);
	xuat(vitri);
	return 0;
}
int timXTrongMangBangNhiPhan(int A[], int trai, int phai, int x)
{
    int giua;
    while(trai <= phai)
 	{
        giua = (trai + phai) / 2;
        if (A[giua] == x)
            return giua;
        if (x > A[giua])
            trai = giua + 1;
        else
            phai = giua - 1;
	}
	return -1;
}
void xuat(int vitri)
{
	cout<<vitri;
	/*if(co != -1)
		cout<<"Tim thay x";
	else
		cout<<"Khong tim thay!";*/
}
void xuatMang(int A[], int n)
{
	for(int i = 0; i<n; i++)
		cout<<A[i];
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