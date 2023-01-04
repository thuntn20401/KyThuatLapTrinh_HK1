#include <stdio.h>
#include <string.h>
void xuat (int kt);
int kiemTraDoiXung (char S[]);
void main ()
{
	char S[100];
	gets (S);
	int kt = kiemTraDoiXung (S);
	xuat (kt);
}
int kiemTraDoiXung (char S[])
{
	int i = 0;
	int j = strlen(S)-1;
	while (i<=j)
	{
		if (S[i] != S[j])
			return 0;
		return 1;
	}
	i++;
	j--;
}
void xuat (int kt)
{
	if (kt ==1)
		printf ("la chuoi doi xung");
	else
		printf ("khong la chuoi doi xung");
}
