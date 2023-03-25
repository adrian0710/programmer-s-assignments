#include <stdio.h>
int main()
{
	int n,res,c,e,inv=0;
	printf("Ingresar número a invertir (debe ser mayor que 3 digitos):\n");
	scanf("%d",&n);
	if(n>999||n<-999)
	{
		c=0;
		e=0;
		while(n!=0)
		{
			res=n%10;
			n=n/10;
			inv=inv*10+res;
			if(res==3||res==-3)
			{
				c=c+1;
			}
			else
			{
				if(res==5||res==-5)
				{
					e=e+1;
				}
			}
		}
		printf("El nuevo número invertido es: %d",inv);
		printf("\nLa cantidad de veces que ingresó el número 3 es: %d", c);
		printf("\nLa cantidad de veces que ingresó el número 5 es: %d", e);
	}
	else
	{
		printf("Número inválido");
	}
	return 0;
}