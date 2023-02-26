#include <stdio.h>
/* Programa que calcule el precio neto de un producto de una empresa de venta de recambios de automoviles */
int main ()
{
    float precio_neto, precio_coste, margen;
    /* Entrada de datos: precio_coste y margen */
    printf ("Cual es el precio de coste?");
    scanf ("%f", &precio_coste);
    
    printf ("Cual es el margen?");
    scanf ("%f", &margen);
    
    /* Proceso: calculo del peso neto */
    
    precio_neto=precio_coste*(100+margen)/100;
    
    /* Salida de datos */
    printf ("El precio neto del producto es de %f euros\n", precio_neto);
}