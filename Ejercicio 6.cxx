#include <stdio.h>
int main ()
{
	float d,e;
	printf ("Ingresar cantidad en dolar:");
	scanf ("%f", &d);
	e=d/166.386;
	printf ("Valor en euro: %.2f $", e);
	
	return 0;
}