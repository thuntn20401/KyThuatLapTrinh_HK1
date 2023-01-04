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
	char S1[100];
	strcpy(S1, S);
	strrev(S1);
	if (strcmp(S, S1) == 0)
		return 1;
	return 0;
}
void xuat (int kt)
{
	if (kt ==1)
		printf ("la chuoi doi xung");
	else
		printf ("khong la chuoi doi xung");
}
