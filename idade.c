#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	float dias;
	float meses;
	float anos;

}id;

int main(void){
	id ok;
	printf("informe a idade:\n");
	printf("anos:");
	scanf("%f",&ok.anos);
	printf("meses:");
	scanf("%f",&ok.meses);
	printf("dias:");
	scanf("%f",&ok.dias);
	float x= ok.anos*365 +ok.meses*30 + ok.dias;
	printf("em dias: %.1f\n",x);
	float y= x/30;float z=x/365;
	printf("em meses: %.2f\nem anos:%.2f",y,z);

}
