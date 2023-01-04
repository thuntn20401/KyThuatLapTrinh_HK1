#include <stdio.h>
#include <string.h>

void demkieu (char S[]);

void main()
{
	char S[201];
	gets (S);
	demkieu (S);	
}

void demkieu (char S[])
{
	int a=0, b=0, c=0, d=0;
	for (int i=0; i<strlen(S); i++)
	{
		if (S[i]>='a' && S[i]<='z')
			a++;
		else 
			if (S[i]>='A' && S[i]<='Z')
				b++;
			else
				if (S[i]>='0' && S[i]<='9')
					c++;
				else
					d++;
	}
	printf ("%d %d %d %d", a, b, c, d);

}