#include <stdio.h>
#include <string.h>
void timMin (char A[], char B[], char C[]);
void xuat (char KQ[]);
int soSanh (char A[], char B[]);

void main ()
{
	char A[201];
	char B[201];
	char C[201];
	gets (A);
	gets (B);
	gets (C);
	timMin (A, B, C);
}
void xuat (char KQ[])
{
	printf ("%s", KQ);
}
void timMin (char A[], char B[], char C[])
{
	char MIN[201];
	strcpy (MIN, A);
	
		if (soSanh (MIN, B)==1)
			strcpy (MIN , B);
		else
			if (soSanh (MIN, C)==1)
			strcpy (MIN, C);
	xuat (MIN);
}
int soSanh (char A[], char B[])
{
	int l1 = strlen (A);
	int l2 = strlen (B);
	if (l1 > l2)
		return 1;
	else
		if (l1 < l2)
			return -1;
		else
			
			return 0;
				
}
