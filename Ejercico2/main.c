
#include <stdio.h>

int main() {
    int tamanio =0;
    int aEliminar;
    printf("De cuantas Pociciones quiere el vector?\n");
    scanf("%d",&tamanio);
    int vector[tamanio];
    for(int i = 0;i<tamanio;i++){
        printf("Digite el valor %d \n",(i+1));
        scanf("%d",&vector[i]);
    }
    printf("Este es su vector");
    for(int i = 0;i<tamanio;i++){
        printf("\n%d",vector[i]);
    }
    printf("\nque pocicion desea eliminar\n");
    scanf("%d",&aEliminar);
    vector[aEliminar+1]=0;
    printf("\nResultado del vector");
    for(int i = 0;i<tamanio;i++){
        if(vector[i]!=0){
            printf("\n%d",vector[i]);
        }
    }
    return 0;
}

