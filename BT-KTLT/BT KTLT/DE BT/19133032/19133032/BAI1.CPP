#include <stdio.h>
#include <string.h>
#define SIZE 201

void timMin (char a[], char b[], char c[]);
void xuat (char kq[]);
int soSanh (char a[], char b[]);

void main ()
{
	char a[SIZE];
	char b[SIZE];
	char c[SIZE];
	gets (a);
	gets (b);
	gets (c);
	timMin (a, b, c);
}
void xuat (char kq[])
{
	printf ("%s", kq);
}
void timMin (char a[], char b[], char c[])
{

	char min[SIZE];
	strcpy (min, a);
	int ss = soSanh (min, b);
		if (ss==1)
			strcpy (min , b);
		else
		{
			int ss = soSanh (min, c);
			if (ss==1)
			strcpy (min, c);
		}
	xuat (min);
}

int soSanh (char a[], char b[])
{

	int l1 = strlen (a)-1;
	int l2 = strlen (b)-1;
	if (l1 > l2)
		return 1;
	else
	if (l1 < l2)
		return -1;
	else
		strcmp (a, b);	 		
}
