//chuong 2. bai 13. tro choi bai min

#include<iostream>
using namespace std;
#define SIZE 100
void nhap(int A[][SIZE], int &m, int &n);
void xuat(int A[][SIZE], int m, int n);
void taoBaiMin(int A[][SIZE], int m, int n);
void chuyenGiaTri(int A[][SIZE], int m, int n);
int main()
{
	int A[SIZE][SIZE] ={0};
	int m, n;
	nhap(A,m,n);
	taoBaiMin(A,m,n);
	xuat(A,m,n);
}
void taoBaiMin(int A[][SIZE], int m, int n)
{
	chuyenGiaTri(A,m,n);	//doi so 1 thanh 9
	int X[8] ={-1, -1, -1, 0, 1, 1,  1,  0 };
	int Y[8] ={-1,  0,  1, 1, 1, 0, -1, -1};
	for(int i = 1; i<=m; i++)
		for(int j = 1; j<=n; j++)
			if(A[i][j] ==0)
				for(int k = 0; k<8; k++)
					if(A[i+X[k]][j+Y[k]] == 9)
						A[i][j]++;
}

void chuyenGiaTri(int A[][SIZE], int m, int n)
{
	for(int i = 1; i<=m; i++)
		for(int j = 1; j<=n; j++)
			if(A[i][j] == 1)
				A[i][j] = 9;
 } 


void nhap(int A[][SIZE], int &m, int &n)
{
	cin>>m>>n;
	for(int i = 1; i<=m; i++)
		for(int j = 1; j<=n; j++)
			cin>>A[i][j];
}
void xuat(int A[][SIZE], int m, int n)
{
	cout<<"----------------"<<endl;
	for(int i =1; i<=m; i++)
	{
		for(int j = 1; j<=n; j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
}