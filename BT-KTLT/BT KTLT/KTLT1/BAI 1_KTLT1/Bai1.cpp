#include <stdio.h>
#include <string.h>
int tinhDiem (char S[]);
void xuat (int kq);
void main ()
{
	char S[100];
	gets (S);
	int kq = tinhDiem (S);
	xuat (kq);
}
void xuat (int kq)
{
	printf ("%d", kq);
}
int tinhDiem (char S[])
{
	int Diem=0;
	int i= 0;
	int n = strlen(S);
	while (i<n)
	{
		int d = 0;
		int D = 0;
		while (S[i] == 'V')
		{
			d++;
			D = D+d;
			i++;
		}
		Diem = Diem + D;
		i++;
	}
	return Diem;

}