#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	// 2,3 e 5
	float nota1,nota2,nota3;
	printf("notas:\n");
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	float y=((nota1*2)+(nota2*3)+(nota3*5))/(2+3+5);
	printf("media final: %.2f",y);
	if(y>=7){
		printf("\taprovado\n");
	}else if(y<7 && y>4){
		printf("\treposição\n");
	}else{
		printf("\treprovado\n");
	}


}

