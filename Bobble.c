#include <stdio.h>

int main() {
    // vetor inicial para ordena��o
    int vetor[] = {10, 2, 14, 26, 8};  
    int n = sizeof(vetor) /sizeof(vetor[0]);  // determina o tamanho do vetor automaticamente

    printf("Vetor original: ");// imprime o vetor original antes da ordena��o
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // mostra cada elemento do vetor
    	}
    printf("\n");

    for (int i = 0; i < n - 1; i++) {  // agoritmo Bubble Sort para ordenar o vetor em ordem crescente
    for (int j = 0; j < n - 1 - i; j++) {// a cada pasagem, o maior elemento restante vai para o final do vetor
         if (vetor[j] > vetor[j + 1]) {  // compara elementos adjacentes
                                        // se o elemento atual for maior, troca de posi��o com o pr�ximo
            int temp = vetor[j];         // armazena o valor do elemento atual
               vetor[j] = vetor[j + 1];     // move o proximo elemento para a posi��o atual
               	 vetor[j + 1] = temp;         // coloca o valor armazenado na pr�xima posi��o
         }
        }
}

    printf("Vetor ordenado: "); // iprime o vetor ap�s a ordena��o
	for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);  // nostra cada elemento do vetor j� ordenad
    }
    printf("\n");

    return 0;  
}

