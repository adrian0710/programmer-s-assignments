#include <stdio.h>
int main()
{
	float n1,n2,n3,p;
	printf ("Ingresar tres notas:");
	scanf ("%f", &n1);
	scanf ("%f", &n2);
	scanf ("%f", &n3);
	p=(n1+n2+n3)/3;
	printf ("El promedio es: %.2f\n", p);
	
	return 0;	
}