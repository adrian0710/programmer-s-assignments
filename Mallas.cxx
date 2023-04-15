#include <stdio.h>
int main()
{
	int i, num_clientes, annos_comp_beisbol, annos_comp_tenis, clientes_descuento=0;
	float costo, monto_total=0, metros_beisbol, metros_tenis, cant_beisbol=0, cant_tenis=0;
	char tipo_comprador;
	const float malla_beisbol=50, malla_tenis=80;
	printf("Número de clientes: ");
	scanf("%d", &num_clientes);
	for(i=1; i<=num_clientes; i++){
		printf("Tipo de comprador: de beisbol(b) o de tenis(t) ");
		scanf(" %c", &tipo_comprador);
		if(tipo_comprador=='b'){
			printf("Años como comprador: ");
			scanf("%d", &annos_comp_beisbol);
			if(annos_comp_beisbol>15){
				clientes_descuento=clientes_descuento+1;
				printf("Metros: ");
				scanf("%f", &metros_beisbol);
				costo=malla_beisbol*metros_beisbol*0.7;
				monto_total=monto_total+costo;
				cant_beisbol=cant_beisbol+metros_beisbol;
				printf("Costo de la compra: %.2f\n", costo);
			}
			else{
				if((annos_comp_beisbol>5)&&(annos_comp_beisbol<=15)){
					clientes_descuento=clientes_descuento+1;
					printf("Metros: ");
					scanf("%f", &metros_beisbol);
					costo=malla_beisbol*metros_beisbol*0.92;
					monto_total=monto_total+costo;
					cant_beisbol=cant_beisbol+metros_beisbol;
					printf("Costo de la compra: %.2f\n", costo);
				}
				else{
					if((annos_comp_beisbol>=0)&&(annos_comp_beisbol<=5)){
						printf("Metros: ");
						scanf("%f", &metros_beisbol);
						costo=malla_beisbol*metros_beisbol;
						monto_total=monto_total+costo;
						cant_beisbol=cant_beisbol+metros_beisbol;
						printf("Costo de la compra: %.2f\n", costo);
					}
				}
			}
		}
		else{
			if(tipo_comprador=='t'){
				printf("Años como comprador: ");
				scanf("%d", &annos_comp_tenis);
				if(annos_comp_tenis>15){
					clientes_descuento=clientes_descuento+1;
					printf("Metros: ");
					scanf("%f", &metros_tenis);
					costo=malla_tenis*metros_tenis*0.7;
					monto_total=monto_total+costo;
					cant_tenis=cant_tenis+metros_tenis;
					printf("Costo de la compra: %.2f\n", costo);
				}
				else{
					if((annos_comp_tenis>5)&&(annos_comp_tenis<=15)){
						clientes_descuento=clientes_descuento+1;
						printf("Metros: ");
						scanf("%f", &metros_tenis);
						costo=malla_tenis*metros_tenis*0.94;
						monto_total=monto_total+costo;
						cant_tenis=cant_tenis+metros_tenis;
						printf("Costo de la compra: %.2f\n", costo);
					}
					else{
						if((annos_comp_tenis>=0)&&(annos_comp_tenis<=5)){
							printf("Metros: ");
							scanf("%f", &metros_tenis);
							costo=malla_tenis*metros_tenis;
							monto_total=monto_total+costo;
							cant_tenis=cant_tenis+metros_tenis;
							printf("Costo de la compra: %.2f\n", costo);
						}
					}
				}
			}
		}
	}
	printf("\nCantidad de clientes con descuento: %d\n", clientes_descuento);
	printf("Monto total obtenido: %.2f\n", monto_total);
	printf("Cantidad de metros de malla de beisbol vendido: %.0f\n", cant_beisbol);
	printf("Cantidad de metros de malla de tenis vendido: %.0f\n", cant_tenis);
	if(cant_beisbol>cant_tenis){
		printf("Se vendieron más mallas de beisbol que de tenis.");
	}
	else{
		if(cant_beisbol<cant_tenis){
			printf("Se vendieron más mallas de tenis que de beisbol.");
		}
		else{
			printf("Se vendieron cantidades iguales de mallas de beisbol y de tenis.");
		}
	}
	return 0;
}