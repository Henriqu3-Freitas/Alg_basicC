#include <stdio.h>

int main(){
    int p,i=1,num=0;
    scanf("%d",&p);
    while(i<=p){
        int aux=i;
        while (aux > 0) {
            aux/= 10;
            num++;
        }
        i++;
    }
    printf("%d\n",num);
    return 0;
}
