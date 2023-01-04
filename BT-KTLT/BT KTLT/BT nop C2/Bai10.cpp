#include <stdio.h>
void nhap (int &d, int &m, int &y);
void ngay_tiep_theo (int &d, int &m, int &y);
void main()
{
	int d,m,y;
	nhap (d, m, y);
	ngay_tiep_theo (d, m, y);
}
void nhap (int &d, int &m, int &y)
{
	scanf("%d%d%d",&d,&m,&y);
}
void ngay_tiep_theo (int &d, int &m, int &y)
{
	int D;
	switch(m)
	{
    case 1: 
	case 3: 
	case 5: 
	case 7:
	case 8 :
	case 10:
	case 12:
		D = 31; break;
    case 2:
		if ((y%4==0) && (y%100) || (y%400==0))
			D = 29;
		else D =28;
		break;
    case 4:
	case 6: 
	case 9: 
	case 11:
		 D =30; break;    
	}
	if (d>D)
	{
		printf ("khong hop le");
	}
	else
	{
		if (d==D)
		{
			d=1;
			m++;
			if (m>12)
			{
				m=1;
				y++;
			}
		}
		else d++;
			printf("%d %d %d",d,m,y);
	}
}
