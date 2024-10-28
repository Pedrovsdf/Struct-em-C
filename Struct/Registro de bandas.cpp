#include <stdio.h>

struct Estrutura_Bandas
{
	char nome[50];
	char tipo[50];
	int integrantes;
	int posicao;
}
Banda[5];

int main(){
	int i=0, j=0;
	
	printf("\n---------- Cadastro de bandas ----------\n\n");
	
	for(i=0; i<5; i++){
	printf("\nInsira o nome da banda %d: ", i+1);
	scanf("%s", &Banda[i].nome);
	
	printf("Insira o tipo de musica que a banda %s toca: ", Banda[i].nome);
	scanf("%s", &Banda[i].tipo);
	
	printf("Digite o numero de integrantes da banda %s: ", Banda[i].nome);
	scanf("%d", &Banda[i].integrantes);
	
	printf("Digite em que posicao essa banda esta dentre suas 5 bandas favoritas: ");
	scanf("%d", &Banda[i].posicao);
		if(Banda[i].posicao < 1 || Banda[i].posicao > 5){
			printf("Erro, eh preciso digitar um valor valido.\n");
			return 0;	
		}
	}
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	
	for(j=1; j<=5; j++){
		for(i=0; i<5; i++){
			if(Banda[i].posicao == j){
				printf("A banda %s esta na posicao %d\n", Banda[i].nome, j);
			}
		}
	}
	return 0;
}
