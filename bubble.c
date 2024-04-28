#include <stdio.h>

void main (void){
    int vetA [10] = {1, 4, 6, 12, 43, 98, 54, 22, 13, 87};
    int aux;
    int *pA;
    int *pB;
    int tamV = sizeof(vetA)/sizeof(vetA[0]);

    printf("-----BUBBLE SORT-----");
    printf("\nVetor nao ordenado: \n");
    for(int i=0; i<tamV-1; i++){
    printf(" %d ", vetA[i]);
    }

    printf("\n\nInvertendo nome  \n[          ]\n[==        ]\n[====      ]\n[======    ]\n[========  ]\n[==========]");
    while(tamV>0){
        pA = &vetA[0];
        pB = (pA+1);
        for (int i = 0; i < tamV-1; i++)
        {   
            if(*pA > *pB){
                aux = *pA;
                *pA = *pB;
                *pB = aux;
            }
            pA++;
            pB++;
        }
        tamV--;

    } 

    printf("\n\nVetor ordenado: \n%d %d %d %d %d %d %d %d %d %d", vetA[0], vetA[1], vetA[2],vetA[3], 
         vetA[4], vetA[5], vetA[6], vetA[7], vetA[8], vetA[9]);
}