//chuong 2 bai 11. cong tru 2 so lon
#include<iostream>
#define SIZE 100
using namespace std;
void tinhTong(char S1[], char S2[], char S[]);
void chen(char S[], int k);
void chuanHoa(char S1[], char S2[]);
void tinhHieu(char S1[], char S2[], char S[]);
void tinhTruSoLonChoSoNho(char S1[], char S2[], char S[]);

int main()
{
	char S1[SIZE], S2[SIZE], S[SIZE];
	gets(S1);
	gets(S2);
	chuanHoa(S1,S2);
	//tinhTong(S1,S2,S);
	tinhHieu(S1,S2,S);
	puts(S);
	return 0;
}
void tinhHieu(char S1[], char S2[], char S[])
{
	if(strcmp(S1,S2)>0)
		tinhTruSoLonChoSoNho(S1,S2,S);
	else
	{
		tinhTruSoLonChoSoNho(S2,S1,S);
		strrev(S);
		int l = strlen(S);
		S[l] = '-';
		S[l+1] = '\0';
		strrev(S);
	}
}

void tinhTruSoLonChoSoNho(char S1[], char S2[], char S[])
{
	strrev(S1);
	strrev(S2);
	int l = strlen(S1);
	int nho = 0;
	for(int i = 0; i<l; i++)
	{
		int t = (S1[i] - '0') - (S2[i] - '0') - nho;
		if(t<0)
		{
			S[i] = t+10+'0';
			nho = 1;
		}
		else
		{
			S[i] = t+'0';
			nho = 0;
		}
		
	}
	if(nho == 1)
		S[l++] = 'l';
	S[l] ='\0';
	strrev(S);
}
void chuanHoa(char S1[], char S2[])
{
	 int l1=strlen(S1);
	 int l2=strlen(S2);
	 if(l1>l2)
	 {
	 	chen(S2,l1-l2);
	 }
	 else
	 	chen(S1,l2-l1);
	 
}
void chen(char S[], int k)
{
	strrev(S);
	int l = strlen(S);
	for(int i = 0; i<k; i++)
		S[l+i] = '0';
	S[l+k]='\0';
	strrev(S);
}

void tinhTong(char S1[], char S2[], char S[])
{
	strrev(S1);
	strrev(S2);
	int l = strlen(S1);
	int nho = 0;
	for(int i = 0; i<l; i++)
	{
		int t = (S1[i] - '0') + (S2[i] - '0') + nho;
		S[i] = t%10 + '0';
		nho = t/10;
		
	}
	if(nho == 1)
		S[l++] = 'l';
	S[l] ='\0';
	strrev(S);
}