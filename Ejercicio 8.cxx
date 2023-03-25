#include <stdio.h>
int main ()
{
	int a,b,c;
	printf ("Ingresar tres valores:\n");
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	if (a>b)
		if (a>c)
			printf ("El número %d es el mayor de los tres\n", a);
		else
			printf ("El número %d es el mayor de los tres\n", c);
	else
		if (b>c)
			printf ("El número %d es el mayor de los tres\n", b);
		else
			printf ("El número %d es el mayor de los tres\n", c);
	
	return 0;
}