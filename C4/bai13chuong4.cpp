//liet ke hoan vi
#include<iostream>
#define SIZE 20
using namespace std;
int A[SIZE], B[SIZE] = {0}, n;
void lietKeHoanVi(int k);
void xuat();
int main()
{
	cin>>n;
	lietKeHoanVi(0);
	return 0;
}

void lietKeHoanVi(int k)
{
	if(k==n)
		xuat();
	else
	{
		for(int i = 0; i<n; i++)
			if(B[i] == 0)
			{
				A[k] = i;
				B[i] = 1;
				lietKeHoanVi(k+1);
				B[i] = 0;
			}
	}
}
void xuat()
{
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}