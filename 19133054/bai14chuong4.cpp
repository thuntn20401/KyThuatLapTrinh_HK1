//ma di tuan

#include<stdio.h>
#include<stdlib.h>
#define SIZE 15
int A[SIZE][SIZE] = {0}, n = 6;
int dem = 0;
int X[8] = {-2, -2,-1, 1, 2, 2, 1, -1 };
int Y[8] = {-1,  1, 2, 2, 1,-1,-2, -2 };
void diTuan(int x, int y);
void xuat();
int main()
{
	diTuan(2,3);
	printf("Khong co phuong an");
	//xuat();
}
void diTuan(int x, int y)
{
	dem++;
	A[x][y] = dem;
	if(dem==n*n)
	{
		xuat();
		exit(0);
	}
	for(int i = 0; i<8; i++)
	{
		int xx = x + X[i];
		int yy = y + Y[i];
		if(xx>=0 && xx<n && yy>=0 && yy<n && A[xx][yy]==0)
			diTuan(xx,yy);
	}
	dem--;
	A[x][y] = 0;
}
void xuat()
{
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
}