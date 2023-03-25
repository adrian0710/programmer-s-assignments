#include <stdio.h>
int main ()
{
	float p,p1,p2,r,c,a;
	printf ("ingresar presupuesto:");
	scanf ("%f", &p);
	p1=p/2;
	p2=p/3;
	r=p-(p1+p2);
	c=p1/3;
	a=p2/0.72;
	printf ("Cantidad comprable de café: %fkg\n", c);
	printf ("Cantidad comprable de azúcar: %fkg\n", a);
	printf ("Restante: %.2f $.\n", r);
	
	return 0;
}