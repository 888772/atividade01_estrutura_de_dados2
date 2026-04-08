// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[4];
    int mat[4][4];
    int i,j,k,l;
    int valor, valor_soma, valor_sub, valor_mult;
    
    for(i = 0; i < 4; i++)
    {
        printf("DIGITE O NUMERO NA LINHA %d DO VETOR\n", i);
        scanf("%d", &vet[i]);
        valor = mat[0][i] + vet[i];
        mat[0][i] = valor;
    }
    
    for(j=0;j<4;j++){
        valor_soma = vet[j] + (1 + j);
        mat[1][j] = valor_soma;
    }
    
    for(k=0;k<4;k++){
        valor_sub = vet[k] - (2 + k);
        mat[2][k] = valor_sub;
    }
    
    for(l=0;l<4;l++){
        valor_mult = vet[l] * (3 + l);
        mat[3][l] = valor_mult;
    }
    
    printf("\nMatriz preenchida:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
