#include <stdio.h>
#include <string.h>
void doDaiChuoiConChung (char X[], char Y[], int L[][101]);
int max (int a, int b);
int main ()
{
	char X[101];
	char Y[101];
	gets (X);
	gets (Y);
	int L[101][101];
	doDaiChuoiConChung (X, Y, L);
}

void doDaiChuoiConChung (char X[], char Y[], int L[][101])
{
	int m = strlen(X);
	int n = strlen(Y);
	int i, j;
	for (i=0; i<=m; i++)
		L[i][0] = 0;

	for (i=0; i<=n; i++)
		L[0][i] = 0;
	for (i=1; i<=m; i++)
		for (j=1; j<=n; j++)
		{
			if (X[i-1] == Y[j-1])
				L[i][j] = L[i-1][j-1] + 1;
			else
				L[i][j] = max(L[i-1][j], L[i][j-1]);
		}
	printf ("%d", L[m][n]);

}
int max (int a, int b)
{
	if (a>b)
		return a;
	else
		return b;
}