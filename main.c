#include <stdio.h>

int main() {
        
		int i, j;
		const int MAX_BARRAS = 50; // largura máxima da barra

		// Número de filmes (fixo)
		const int m = 5;

		// Nomes dos filmes (array de strings)
		const char *filmes[] = {
				"Frozen",
				"Carros",
				"Superman",
				"Velozes e Furiosos",
				"Shrek"
		};

		// Valores pré-definidos de ingressos vendidos
		int ingressos[] = {120, 250, 180, 300,90};

		// Descobrir o maior valor para normalizar as barras
		int max = ingressos[0];
		for(i = 1; i < m; i++){
				if(ingressos[i] > max){
						max = ingressos[i];
				}
		}

		printf("\n\033[1;31m====== CINEMA ANIME ======\033[0m\n\n");
		printf("Vendas de ingressos por filme.\n\n");

		// Exibir gráfico horizontal
		for(i = 0; i < m; i++){
				printf("%-25.25s | ", filmes[i]); // Mostra o nome alinhado à esquerda

				// Escalar a barra proporcional ao maior valor
				int barras = (ingressos[i] * MAX_BARRAS) / max;

				for(j = 0; j < barras; j++){
						printf("■");
				}

				// Destacar o filme mais assistido com '<<'
				if(ingressos[i] == max){
						printf(" << ");
				}

				// Mostrar quantidade de ingressos
				printf(" (%d)\n", ingressos[i]);
		}

		return 0;
}
