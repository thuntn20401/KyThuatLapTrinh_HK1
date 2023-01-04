
#include <iostream>
using namespace std;

void xoaCacPhanTuTrung(int A[],int &n);
void xoa1PhanTu(int A[],int &n,int x);
void nhap(int A[],int &n);
void xuat(int A[],int n);

int main() {
	int A[100],n;
	
	nhap(A,n);
	xoaCacPhanTuTrung(A,n);
	xuat(A,n);
	return 0;
}
void xoaCacPhanTuTrung(int A[],int &n)
{
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){	
			if(A[i]==A[j]){					
				xoa1PhanTu(A,n,j);
				j--;
			}
		}
	}
}
void xoa1PhanTu(int A[],int &n,int x)
{
	for(int i=x;i<n;i++){
		A[i]=A[i+1];
	}
	n--;
}
void nhap(int A[],int &n)
{
	cin>>n;
	for(int i=0;i<n;i++)
	
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
	
		cout<<A[i]<<" ";
}