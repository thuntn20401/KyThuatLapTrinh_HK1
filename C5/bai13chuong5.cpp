#include<iostream>
#define SIZE 100
using namespace std;
void lietKeToHop(int n, int k);
void xuat(int A[], int n);
int main()
{
	int n, k;
	cin>>n>>k;
	lietKeToHop(n,k);
	return 0;
	
}
void lietKeToHop(int n, int k)
{
	int A[SIZE];
	int i;
	for(int i = 0; i<k; i++)
		A[i] = i;
	xuat(A,k);
	i = k-1;
	do
	{
		
		while(A[i] < n-k+i)
		{
			A[i]++;
			for(int j = i+1; i<k; j++)
				A[j] = A[j-1] +1;
			xuat(A,k);
			i = k-1;
		}
		i--;
			
	}while(i>=0);
}
void xuat(int A[], int n)
{
	for(int i = 0; i<n; i++)
		cout<<A[i]<<" ";
	cout<<endl;
}