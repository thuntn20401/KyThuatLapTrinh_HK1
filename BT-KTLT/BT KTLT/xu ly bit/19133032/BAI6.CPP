#include <stdio.h>
void nhap (int &n, int &k);
void xuat (int n);
void rotateRight (int &n, int k);
void onBit (int &n, int k);
void offBit (int &n, int k);
int getBit (int n, int k);
void main ()
{
	int n, k;
	nhap (n, k);
	rotateRight (n, k);
	xuat (n);
}

void nhap (int &n, int &k)
{
	scanf ("%d%d", &n, &k);
}
void xuat (int n)
{
	printf ("%d", n);
}
void rotateRight (int &n, int k)
{
	for (int i=k-1; i>=0; i--)
	{
		int t = getBit (n, 0);
		n = n >> i;
		if (t == 1)
			onBit (n, 31);
		else
			offBit (n, 31);
	}
}
void onBit (int &n, int k)
{
	n = n | (0x1 << k);
}
void offBit (int &n, int k)
{
	n = n & (~(0x1 << k));
}
int getBit (int n, int k)
{
	return (n >> k) & 0x1;
}
