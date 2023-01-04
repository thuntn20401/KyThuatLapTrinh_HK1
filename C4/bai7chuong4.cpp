//bai 7

#include<iostream>
#include<string.h>
using namespace std;
void xuat(int tong);
int tinhTongSoTrongChuoi(char S[]);
void nhap(char S[]);

int main()
{
	char S[200];
	nhap(S);
	int tong = tinhTongSoTrongChuoi(S);
	xuat(tong);
	return 0;
}
int tinhTongSoTrongChuoi(char S[])
{
	int len = strlen(S);
	int i = 0;
	int tong = 0;
	int so = 0;
	while(i<=len)
	{
		if(S[i] >= '0' && S[i]<='9')
			so = so*10 + (S[i] - '0');
		else
		{
			tong = tong + so;
			so = 0;
		}
		i++;
	}
	return tong;
}
void nhap(char S[])
{
	gets(S);
}
void xuat(int tong)
{
	cout<<tong;
}