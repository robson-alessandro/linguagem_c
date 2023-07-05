#include <stdio.h>
#include <stdlib.h>

int main(){
    int** matriz;
    int condicao;
    int contador=0;

    matriz=malloc(sizeof(int*));

    while (condicao!=0){
        matriz[contador]=malloc(sizeof(int)*5);
        printf("digite o numero \n");
        scanf("%d",matriz[contador]);
        condicao=*matriz[contador];
        contador++;
    }
    contador--;
    for(int f=0; f<contador; f++){
       printf("%d\n",*matriz[f]);
    }

    for(int j=0; j<contador ; j++){
        free(matriz[j]);
    }
    free(matriz);

    return 0 ;
}