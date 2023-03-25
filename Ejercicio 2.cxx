#include <stdio.h>
int main()
{
	float a,V;
	printf ("Ingresar el valor de la arista: ");
	scanf ("%f", &a);
	V=a*a*a;
	printf ("El volumen del cubo es: %f\n", V);
	
	return 0;
}