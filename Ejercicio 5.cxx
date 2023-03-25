#include <stdio.h>
int main ()
{
	int v1, v2;
	printf ("Ingresar 1er valor:");
	scanf ("%d", &v1);
	printf ("Ingresar 2do valor:");
	scanf ("%d", &v2);
	v1=v1+v2;
	v2=v1-v2;
	v1=v1-v2;
	printf ("1er valor es ahora: %d\n", v1);
	printf ("2do valor es ahora: %d\n", v2);
	
	return 0;
}