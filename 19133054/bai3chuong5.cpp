//bai 3

#include<iostream>
#define SIZE 100
using namespace std;
void nhapMang(int A[], int &n);
void xuat(int kq);
void doiCho(int &x, int &y);
void sapXep(int A[], int n);
void xuatMang(int A[], int n);
int timVTLeMin(int A[], int n);
int timSoLeNNLonHonMoiSoChan(int A[], int n);
int main()
{
	int A[SIZE],n;
	nhapMang(A,n);
	cout<<timSoLeNNLonHonMoiSoChan(A,n);
	//sapXep(A,n);
	//xuatMang(A,n);
	//int max = timSoChanMax(A,n);
	//int kq = timSoLe(A,n);
	//xuat(max);
}
//b3 tim so le nho nhat nhung lon hon moi so chan
int timSoLeNNLonHonMoiSoChan(int A[], int n)
{
	int vitrilenhonhat = timVTLeMin(A,n);
	for(int i = vitrilenhonhat + 1; i<n; i++)
		if(A[i] % 2 == 0)
			return A[i];
}
//b2 tim vi tri le nho nhat
int timVTLeMin(int A[], int n)
{
	sapXep(A,n);
	for(int i = n-1; i>=0; i--)
		if(A[i]%2!=0)
			return i;
}
//B1 sap xep giam dan
void sapXep(int A[], int n)
{
	for(int i= 0; i<n-1; i++)
		for(int j = i+1; j<n; j++)
			if(A[i]<A[j])
				doiCho(A[i],A[j]);
}
void doiCho(int &x, int &y)
{
	int t = x; 
	x = y;
	y = t;
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
	cout<<kq;
}