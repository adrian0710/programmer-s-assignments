#include <stdio.h>
int main()
{
	int n_client, i, p, ci, ccd=0, cd3=0, cd5=0, t;
	float bs, pd, wgif;
	printf("Número de clientes: ");
	scanf("%d",&n_client);
	wgif=0;
	for(i=1;i<=n_client;i++)
	{
		printf("\nIngresar monto total de la compra: ");
		scanf("%f",&bs);
		if((bs>999)&&(bs<5001))
		{
			printf("Ingresar tipo de producto comprado (solo amarillo '1' o morado '13' obtienen descuento): ");
			scanf("%d",&t);
			if(t==1||t==13)
			{
				printf("Cantidad de productos comprados: ");
				scanf("%d",&p);
				if(p>2)
				{
					ccd=ccd+1;
					if(bs>wgif)
					{
						wgif=bs;
					}
					printf("Ingresar la cédula del cliente: ");
					scanf("%d",&ci);
					if (ci%2==0)
					{
						cd5=cd5+1;
					}
					else
					{
						cd3=cd3+1;
					}
				}
				else
				{
					printf("\nNo :^)\n");
				}
			}
			else
			{
				printf("\nNo :^)\n");
			}
		}
		else
		{
			printf("\nNo :^)\n");
		}
	}
	pd=ccd*100/n_client;
	printf("\nLa cantidad de clientes con descuento es: %d\n",ccd);
	printf("El porcentaje de clientes con descuento en relación a la clientela total es: %f\n",pd);
	printf("Clientes con 5 porciento de descuento adicional: %d\n",cd5);
	printf("Clientes con 3 porciento de descuento adicional: %d\n",cd3);
	printf("La/s factura/s que recibira/n GIF tienen por monto: %f$", wgif);
	return 0;
}