#include <stdio.h>
#include <string.h>
void nhap (int &n);
void xuat (char S[]);
void doi_thap_phan_sang_nhi_phan (int n, char S[]);
void xuat_nhi_phan (int n, char S[]);
void main ()
{
	char S[1000];
	int n;
	nhap (n);
	doi_thap_phan_sang_nhi_phan (n, S);
	xuat_nhi_phan (n, S);
}
void nhap (int &n)
{
	scanf ("%d", &n);
}
void xuat (char S[])
{
	printf ("%s\n", S);
}
void doi_thap_phan_sang_nhi_phan (int n, char S[])
{
	int i=0;
	while (n>0)
	{
		int t;
		t = n%2;
		n = n/2;
		S[i] = t+'0';
		i++;
	}
	S[i] = '\0';
	strrev (S);
}
void xuat_nhi_phan (int n, char S[])
{
	for (int i=0; i<=n; i++)
	{
		doi_thap_phan_sang_nhi_phan (i, S);
		xuat (S);
	}
}