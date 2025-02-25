//Rodrigo García Mayorga
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int dividendo, divisor, residuo, signo=1, cociente=0;
	printf("Ingrese el dividendo:");
	scanf("%d",&dividendo);
	printf("Ingrese el divisor:");
	scanf("%d",&divisor);
	
    if(divisor == 0){
        printf("No se puede dividir por cero\n");
        return 0;
    }
	
	if( (dividendo<0&&divisor>0) || (dividendo>0&&divisor<0) )//si divisor o dividendo son negativos, el signo será negativo
		signo = -1;
		
	dividendo=abs(dividendo);//los hacemos positivos a ambos
	divisor=abs(divisor);	
	residuo=dividendo;
	while(residuo>=divisor){//hasta que la resta no sea menor que el divisor se seguirá haciendo 
        residuo -= divisor;
        cociente++;
	}
	
	cociente*=signo;
	printf("El cociente truncado es %d", cociente);
	return 0;
}