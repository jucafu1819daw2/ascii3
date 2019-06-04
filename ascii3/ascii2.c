//Autor: Juan Jose Castillo Funes
//Data: 18-2-19
//Programa: ascii3
//VesiÃ³: 1.0
//
#include <stdio.h>

int main() {
	char cCar1,cCar2;
	int n,i;
		
	printf("TAULA ASCII 4-6-2019\n");
	printf("CAR  HEX  DEC   CAR  HEX  DEC\n");
	n=('Z'-'A')/2;
	for (i=0;i<=n;i++) {
		cCar1='A'+i;
		cCar2='A'+i+1+n;
		printf("%c    %x   %d    %c    %x   %d\n",cCar1,cCar1,cCar1,cCar2,cCar2,cCar2);		
	}
	return(0);
}