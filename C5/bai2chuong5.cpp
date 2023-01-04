//bai 2

#include<iostream>
#include<math.h>
#define SIZE 100
using namespace std;
void xuat(long tong);
void nhapMang(int A[], int &n);
long tinhTongAmstrong(int A[], int n);
int laAmstrong(int x);
int demChuSo(int x);

int main()
{
	int A[SIZE], n;
	nhapMang(A,n);
	long tong = tinhTongAmstrong(A,n);
	xuat(tong);
}
long tinhTongAmstrong(int A[], int n)
{
	long tong = 0;
	for(int i = 0; i<n; i++)
		if(laAmstrong(A[i]) == 1)
			tong = tong + A[i];
	return tong;
}
int demChuSo(int x)
{
	int dem = 0;
    while (x > 0)
    {
        x /= 10;
        ++dem;
    }
    return dem;
}
int laAmstrong(int x)
{
	int chuso = demChuSo(x);
	int tam = x, t = 0, socuoi;
	while(tam>0)
	{
		socuoi = tam % 10;
		tam = tam /10;
		t = t + pow(socuoi,chuso);
	}
	if(t == x)
		return 1;
	else
		return 0;
	
}
void nhapMang(int A[], int &n)
{
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>A[i];
}
void xuat(long tong)
{
	cout<<tong;
}