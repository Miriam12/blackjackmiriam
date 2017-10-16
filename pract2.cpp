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
	

	return 0;
}
