#include <stdio.h>

struct Estrutura_Livro
{
	char Titulo[100];
	int Ano_edicao;
	int Num_Pag;
	float Valor;
}
Livro[5];

int main(){
	int i=0;
	float media=0;
	
	printf("\n---------- Cadastro de livros ----------\n\n");
	
	for(i=0; i<5; i++){
	printf("\nInsira o titulo do livro: ");
	scanf("%s", &Livro[i].Titulo);
	
	printf("Digite o ano de edicao: ");
	scanf("%d", &Livro[i].Ano_edicao);
	
	printf("Digite o numero de paginas: ");
	scanf("%d", &Livro[i].Num_Pag);
	
	printf("Digite o valor do livro %s: ", Livro[i].Titulo);
	scanf("%f", &Livro[i].Valor);
	}
	
	for(i=0; i<5; i++){
		media = media + Livro[i].Valor;
	}
	media = media/5;
	
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	
	for(i=0; i<5; i++){
	printf("Titulo do livro: %s\n", Livro[i].Titulo);
	printf("Ano de edicao: %d\n", Livro[i].Ano_edicao);
	printf("Numero de paginas: %d\n", Livro[i].Num_Pag);
	printf("Valor do livro: %.2f\n\n", Livro[i].Valor);
	}
	
	printf("A media do valor dos livros eh: %.2f", media);

	return 0;
}
