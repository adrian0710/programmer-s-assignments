#include <stdio.h>
int main ()
{
	int h,m,s,r;
	printf ("Ingresar hora, minutos y segundos:");
	scanf ("%d", &h);
	scanf ("%d", &m);
	scanf ("%d", &s);
	r=h*3600+m*60+s;
	printf ("Cantidad total de segundos: %d\n", r);
	
	return 0;
}