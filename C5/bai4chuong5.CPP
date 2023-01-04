#include <stdio.h>
void nhap (int &n, int &k);
void xuat (int n);
void rotateLeft (int &n, int k);
void onBit (int &n, int k);
void offBit (int &n, int k);
int getBit (int n, int k);
int main ()
{
	int n, k;
	nhap (n, k);
	//onBit(n,k);
	//offBit(n,k);
	//getBit(n,k);
	rotateLeft (n, k);
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
void rotateLeft (int &n, int k)
{
	for (int i=0; i<k; i++)
	{
		int t = getBit (n, 31);
		n = n << 1;
		if (t == 1)
			onBit (n, 0);
		else
			offBit (n, 0);
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
