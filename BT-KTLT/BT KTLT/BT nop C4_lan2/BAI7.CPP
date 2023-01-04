#include <stdio.h>
#include <string.h>
void nhap (char S[]);
void xuat (int kq);
int tongSoNguyen (char S[]);
void main ()
{
	char S[1000];
	nhap (S);
	int kq = tongSoNguyen (S);
	xuat (kq);
}

void nhap (char S[])
{
	gets (S);
}

void xuat (int kq)
{
	printf ("%d", kq);
}

int tongSoNguyen (char S[])
{
	int t = 0;
	int i = 0;
	while (i < strlen(S))
	{
		int s =0;
		while (S[i] >= '0' && S[i] <= '9')
		{
			s = s*10 + S[i] - '0';
			i++;
		}
		t = t + s;
		i++;
	}
	return t;
}