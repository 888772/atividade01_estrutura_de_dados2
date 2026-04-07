#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int tam;
    int *vet1;
    int *vet2;
    int *vet_soma;
    int *vet_mult;
    int *vet_mod; //resto
    
    
    printf("DIGITE O TAMANHO DO VETOR:\n");
    scanf("%d", &tam);
    
    vet1 = (int *)malloc(tam * sizeof(int));
    vet2 = (int *)malloc(tam * sizeof(int));
    vet_soma = (int *)malloc(tam * sizeof(int));
    vet_mult = (int *)malloc(tam * sizeof(int));
    vet_mod = (int *)malloc(tam * sizeof(int));
    
    if(vet1){
        for(i=0;i<tam;i++){
            printf("DIGITE O %dº VALOR NO VETOR 1:\n", i);
            scanf("%d", &vet1[i]);
            printf("DIGITE O %dº VALOR NO VETOR 2:\n", i);
            scanf("%d", &vet2[i]);
        }
        for(i=0;i<tam;i++){
            vet_soma[i] = vet1[i] + vet2[i];
            vet_mult[i] = vet1[i] * vet2[i];
            vet_mod[i] = vet1[i] % vet2[i];
        }
        for(i=0;i<tam;i++){
            printf("========== [Indice %d] ==========\n", i);
            printf("SOMA: %d\n", vet_soma[i]);
            printf("MULTIPLICAÇÃO: %d\n", vet_mult[i]);
            printf("MOD (RESTO): %d\n", vet_mod[i]);
            printf("================================\n");
        }
    }
    else{
        printf("ERRO AO ALOCAR A MEMORIA!!!");
    }
    free(vet1);
    free(vet2);
    free(vet_soma);
    free(vet_mult);
    free(vet_mod);
    
}
