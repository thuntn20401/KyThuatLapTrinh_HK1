#include <stdio.h>
#include <string.h>
//
void chen (char S[], int x);
void chuanHoa (char S1[], char S2[]);
tinhTong (char S1[], char S2[], char S[]);
//
void main ()
{
	char S1[302];
	char S2[302];
	char S[302];
	gets (S1);
	gets (S2);
	chuanHoa (S1, S2);
	tinhTong (S1, S2,S);
	printf ("%s", S);
}
// 
void chen (char S[], int x)
{
	strrev (S);
	int l = strlen (S);
	for (int i=0; i<x; i++)
		S[l+i] = '0';
	S[l+x] = '\0';
	strrev (S);
}
// 
void chuanHoa (char S1[], char S2[])
{
	int l1 = strlen (S1);
	int l2 = strlen (S2);
	if (l1 > l2)
		chen (S2, l1-l2);
	else 
		chen (S1, l2-l1);

}
// 
tinhTong (char S1[], char S2[], char S[])
{
	strrev (S1);
	strrev (S2);
	int l = strlen (S1);
	int nho = 0;
	for (int i=0; i<l; i++)
	{
		int t = (S1[i] - '0') + (S2[i] - '0') + nho;
		S[i] = t%10 + '0';
		nho = t/10;
	}
	if (nho == 1)
		S[l++] = '1';
	S[l] = '\0';
	strrev (S);
}

