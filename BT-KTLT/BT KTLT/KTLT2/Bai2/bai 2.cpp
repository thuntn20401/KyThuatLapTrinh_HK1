#include <stdio.h>
#include <string.h>
void daoNguoc (char S[], char KQ[]);

void main ()
{
	char S[201], KQ [201];
	gets (S);
	daoNguoc (S, KQ);
	printf ("%s", KQ);
}

void daoNguoc (char S[], char KQ[])
{
	KQ[0] = '\0';
	int i =0;
	int n=strlen (S);
	while (i<n)
	{
		while (i<n && S[i] == 32)
		{
			strcat (KQ," ");
			i++;
		}
		char Tam[100] ="";
		int nTam =0;
		while (i<=n && S[i]!=32)
		{
			Tam[nTam++] = S[i];
			i++;
		}
		Tam[nTam] = '\0';
		strrev(Tam);
		strcat (KQ, Tam);

	}
	
}
