#include <stdio.h>

int main() {
    int opcione = 0;
    double ganancias = 0;
    int matriz[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matriz[i][j] = 0;
        }
    }
    while (opcione != 4) {
        printf("Elija la opcion a realizar\n1.Vender entrada\n2.Ver Asientos ocupados\n3.ver ganancias\n4.salir\n");
        scanf("%d", &opcione);
        if (opcione == 1) {
            int fila;
            int columna;
            printf("\nIngrese la pocicion del asiento que desea comprar\n");
            printf("Fila\n");
            scanf("%d",&fila);
            printf("columna\n");
            scanf("%d",&columna);
            if (fila == 1) {
                if(matriz[fila-1][columna-1]==1){
                    printf("El asiento esta ocupado\n");
                }else{
                    matriz[fila-1][columna-1] = 1;
                    printf("El asiento a sido asignado exitosamente");
                    ganancias=ganancias+5;
                }
            }
            if(fila==5){
                if(matriz[fila-1][columna-1]==1){
                    printf("El asiento esta ocupado\n");
                }else{
                    matriz[fila-1][columna-1] = 1;
                    printf("El asiento a sido asignado exitosamente");
                    ganancias=ganancias+2.5;
                }
            }else{
                if(matriz[fila-1][columna-1]==1){
                    printf("El asiento esta ocupado\n");
                }else{
                    matriz[fila-1][columna-1] = 1;
                    printf("El asiento a sido asignado exitosamente");
                    ganancias=ganancias+3.5;
                }
            }


        }
        if (opcione == 2) {
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++) {
                    printf(" %d ,", matriz[i][j]);
                }
                printf("\n");
            }
        }
        if (opcione == 3) {
            printf("Las ganancias son  :%f\n",ganancias);
            
        }
    }

    return 0;
}

