#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char** argv) {
	char cartas[52]={'A',2,3,4,5,6,7,8,9,10,'J','Q','K','A',2,3,4,5,6,7,8,9,10,'J','Q','K','A',2,3,4,5,6,7,8,9,10,'J','Q','K','A',2,3,4,5,6,7,8,9,10,'J','Q','K'};
	int intento=0,cartas_p,puntos=0,valor,as,r;
	srand(time(NULL));
	do {
		if(intento==0){
			cartas_p=2;
		
			}
			else {
			cartas_p=1;
				
					}
		intento=1;
	for(int i=0; i<cartas_p;i++) {
		
		valor=1+rand()%(52-1);
			
			switch(cartas[valor]){
			case 'A': printf ("DESEAS DARLE VALOR DE 1 AL (A)");
			scanf("%d",&as);
			if(as==1){
				puntos+=1;				
			}
			else{
				puntos+=11;				
			}
			printf("TU CARTA ES: %c \n",cartas[valor]);
			break;
			case 'J':case 'Q':case 'K':
				puntos+=10;	
				printf("TU CARTA ES: %c \n",cartas[valor]);
			break;
			
			default: 
			puntos+=cartas[valor];	
			printf("TU CARTA ES: %d \n",cartas[valor]);		
			break;
				}
			}
			printf("tu puntuacion es: %d \n",puntos);
		printf("QUIERES OTRA CARTA???");
		scanf("%d",&r);	
			
	}while (r==1);
	//COMPUTADORA
     printf (" !!!TURNO DE LA COMPUTADORA !!!\n");
        do {
		if(intento_c==0){
			cartas_c=2;
			sum_cartas+=2;
		
			}
			else {
			cartas_c=1;	
			sum_cartas+=1;
			}			
	
				
	for(int i=0; i<cartas_c;i++) {
		
		valor=1+rand()%(52-1);
			
			switch(cartas[valor]){
			case 'A': 
			if(intento_c==0 ){
				puntos_c+=11;
			}				
			else{
				puntos_c+=1;				
			}
			printf("LA CARTA DE LA COMPUTADORA ES: %c \n",cartas[valor]);
			break;
			case 'J':case 'Q':case 'K':
				puntos_c+=10;	
				printf("LA CARTA DE LA COMPUTADORA ES: %c \n",cartas[valor]);
			break;
			
			default: 
			puntos_c+=cartas[valor];	
			printf("LA CARTA DE LA COMPUTADORA ES: %d \n",cartas[valor]);		
			break;
				}
			}
			printf("LA PUNTUACION DE LA COMPUTADORA ES: %d \n",puntos_c);	
			
			if (intento_c==0 && puntos_c <18){
				t=1;			
			}				
			if (sum_cartas>=3 && puntos_c>=18){
				t=0;					
			}	
			if (intento_c==0 && puntos_c >=18){
				t=0;			
			}
			if (sum_cartas>=3 && puntos_c<18){
				t=1;					
			}							
			
				intento_c=1;		
	}while (t==1);
	
	if(b==1){
		printf("PERDISTE");			
}
    else if (puntos_c>21)  {
			printf("GANASTE\n");		
			printf("PERDIO LA COMPUTADORA");			
			}
	else if (puntos_c> puntos)	{
		printf("PERDISTE\n");	
		printf("GANO LA COMPUTADORA");		
}	
    else	{
		printf("GANASTE\n");	
		printf("PERDIO LA COMPUTADORA");		
}	
			
	return 0;
}
	

	return 0;
}
