#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int x,y,z;
	printf("infoirme:");
	scanf("%d %d %d",&x,&y,&z);
	int r=pow(x+y,2);int s=pow(y+z,2);
	printf("%d",(r+s)/2);
}
