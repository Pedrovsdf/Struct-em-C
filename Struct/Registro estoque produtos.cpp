#include <stdio.h>

struct Estoque_Produtos
{
	char nome[30];
	int codigo;
	float valor;
	int quantidade;
}
Produto[3];

int main(){
	int i=0, cod=0, qtd=0;
	
	printf("\n---------- Cadastro de produtos ----------\n\n");
	
	for(i=0; i<3; i++){
	printf("\nDigite o nome do produto %d: ", i+1);
	scanf("%s", &Produto[i].nome);
	
	printf("Digite o codigo do produto %d: ", i+1);
	scanf("%d", &Produto[i].codigo);
	
	printf("Digite o valor do produto %d: ", i+1);
	scanf("%f", &Produto[i].valor);
	
	printf("Digite a quantidade do produto %d: ", i+1);
	scanf("%d", &Produto[i].quantidade);
	}
	
	printf("\nInsira o codigo desejado: ");
	scanf("%d", &cod);
	printf("Insira a quantidade desejada desse produto: ");
	scanf("%d", &qtd);
	
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	
	for(i=0; i<3; i++){
		if(cod == Produto[i].codigo){
			Produto[i].quantidade = Produto[i].quantidade - qtd;
			printf("O estoque do item (%s) foi atualizado, seu novo estoque eh: %d\n", Produto[i].nome, Produto[i].quantidade);
		}
	}
	return 0;
}
