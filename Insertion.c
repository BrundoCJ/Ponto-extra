	#include <stdio.h>

int main() {
    // definido o vetor de n�meros a ser ordenado
    int vetor[] = {5, 3, 8, 4, 2};
    int n = sizeof(vetor) / sizeof(vetor[0]);// calculando o tamanho do vetor
    for (int i = 1; i < n; i++) { // in�cio do algoritmo de Insertion Sort
       
      int chave = vetor[i]; // a chave � o elemento que vamos inserir na posi��o correta
    
        int j = i - 1;  // 'j' � o �ndice do elemento anterior � chave
        
          while (j >= 0 && vetor[j] > chave) {         // a seguir, vamos mover os elementos da parte ordenada do vetor											  
        											// para a direita, caso sejam maiores que a chave
           
            vetor[j + 1] = vetor[j]; // mover o elemento para a direita
            
            // decrementar 'j' para comparar o pr�ximo elemento da parte adenada
            j--;
      }

             // Inserir a chave na posic�o correta (onde j parou)
            vetor[j + 1] = chave;
    }

    // Ap�s a ordena��o, vamos imprimir o vetor ordenado
       printf("Vetor ordenado: ");
    
    // La�o para imprimir os elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    
    printf("\n");

    return 0;
}

