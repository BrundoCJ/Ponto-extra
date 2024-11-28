	#include <stdio.h>

int main() {
    // definido o vetor de números a ser ordenado
    int vetor[] = {5, 3, 8, 4, 2};
    int n = sizeof(vetor) / sizeof(vetor[0]);// calculando o tamanho do vetor
    for (int i = 1; i < n; i++) { // início do algoritmo de Insertion Sort
       
      int chave = vetor[i]; // a chave é o elemento que vamos inserir na posição correta
    
        int j = i - 1;  // 'j' é o índice do elemento anterior à chave
        
          while (j >= 0 && vetor[j] > chave) {         // a seguir, vamos mover os elementos da parte ordenada do vetor											  
        											// para a direita, caso sejam maiores que a chave
           
            vetor[j + 1] = vetor[j]; // mover o elemento para a direita
            
            // decrementar 'j' para comparar o próximo elemento da parte adenada
            j--;
      }

             // Inserir a chave na posicão correta (onde j parou)
            vetor[j + 1] = chave;
    }

    // Após a ordenação, vamos imprimir o vetor ordenado
       printf("Vetor ordenado: ");
    
    // Laço para imprimir os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}

