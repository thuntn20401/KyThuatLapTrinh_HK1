//chuong 3 bai 10

#include<iostream>
#include<string.h>
#define SIZE 100
using namespace std;
void nhap(char S[]);
int kiemTraKiTuCuaChuoi(char S[]);
void xuat(char S[]);


int main()
{
	char S[SIZE];
	nhap(S);
	//xuat(S);
	kiemTraKiTuCuaChuoi(S);
}

int kiemTraKiTuCuaChuoi(char S[])
{
	int l = strlen(S);
	for(int i = 0; i<l; i++)
	{
		cout<<S[i]<<" ";
		if(S[i]>='A' && S[i]<='Z')
			cout<<"Chu hoa"<<endl;
		else if(S[i]>='a' && S[i]<='z')
			cout<<"Chu thuong"<<endl;
		else if(S[i]>='0' && S[i]<='9')
			cout<<"Chu so"<<endl;
		else
			cout<<"Ki tu khac"<<endl;
	}
	return 0;
}
void xuat(char S[])
{
	cout<<S;
}
void nhap(char S[])
{
	gets(S);
}