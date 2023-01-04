//chuong 2 bai 7. xoa ki tu khoang trang thua

#include<iostream>
#include<string.h>
using namespace std;
void nhap(char S[]);
void xuat(char R[]);
void xoaKiTuTrangThua(char S[], char R[]);
void vietHoaTuDauCuaChuoi(char R[]);
int main()
{
	char S[200];
	char R[200];
	nhap(S);
	xoaKiTuTrangThua(S,R);
	xuat(R);
	cout<<endl;
	vietHoaTuDauCuaChuoi(S);
	xuat(S);
}
void vietHoaTuDauCuaChuoi(char R[])
{
	int len = strlen(R);
	for(int i = 0; i<len; i++)
		if(i == 0 || (i>0 && R[i-1]==' '))
			if(R[i] >= 'a' && R[i] <= 'z')
				R[i] = R[i] - 32;
}
void xoaKiTuTrangThua(char S[], char R[])
{
	int vitri = 0;
	int len = strlen(S);
	for(int i = 0; i<len; i++)
	{
		char c = S[i];
		if(c == '\r' || c == '\n' || c == ' ')
			 continue;
		else
			R[vitri++] = c;
	}
}
void nhap(char S[])
{
	gets(S);
}
void xuat(char R[])
{
	cout<<R;
}