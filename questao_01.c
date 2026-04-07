#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int tam;
    int *vet;
    
    
    printf("DIGITE O TAMANHO DO VETOR:\n");
    scanf("%d", &tam);
    
    vet = (int *)malloc(tam * sizeof(int));
    
    if(vet){
        for(i=0;i<tam;i++){
            printf("DIGITE O %dº VALOR:\n", i);
            scanf("%d", &vet[i]);
        }
        for(i=0;i<tam;i++){
            printf("%d\n", vet[i]);
        }
    }
    else{
        printf("ERRO AO ALOCAR A MEMORIA!!!");
    }
    free(vet);
    
}
