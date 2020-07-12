#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct
	{
		float x;
		float y;

	}Pes;
float dist(Pes p1, Pes p2){
   float aux =pow(p2.x-p1.x,2) + pow(p2.y-p1.y,2);
   return sqrt(aux);
}

int main(void){
    Pes p1,p2;
    printf("cord p1:");
    scanf("%f",&p1.x);
    scanf("%f",&p1.y);
    printf("cord p2:");
    scanf("%f",&p1.x);
    scanf("%f",&p1.y);
    float x=dist(p1,p2);
    printf("Distancia: %.2f",x);

}
