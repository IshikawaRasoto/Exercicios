#include <stdlib.h>
#include <stdio.h>

int main(void){
    
    int n;
    scanf("%d", &n);

    int* vetor = (int*) malloc(sizeof(int)*n);

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    int soma = 0;

    i = 0;

    do{
        printf("%d", soma);
        soma += vetor[i];
        i++;
    }while(i < n);

    return 0;
}
