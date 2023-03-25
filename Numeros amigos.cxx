#include <stdio.h>
int main(){
	int a,b,sum,x;
	printf("Ingresar primer número: ");
	scanf("%d",&a);
	printf("Ingresar segundo número: ");
	scanf("%d",&b);
	x=1;
	sum=0;	
	while(x<a){
		if(a%x==0){
			sum=sum+x;}
		x=x+1;}
	if(sum==b){
		printf("Los números son amigos");}
	else{
		printf("Los números no son amigos");}
	return 0;}