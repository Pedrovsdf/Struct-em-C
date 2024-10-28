#include <stdio.h>

struct Cadastro_Trabalho
{
	char Nome[100];
	int Ano_Nascimento;
	int Cateira_Trabalho;
	int Ano_Contratacao;
	int Salario;
}
Pessoa;

int main(){
	int idade=0, aposentar=0;
	
	printf("\n---------- Coleta de dados ----------\n\n");
	
	printf("Nome: ");
	scanf("%s", Pessoa.Nome);
	
	printf("Data de nascimento: ");
	scanf("%d", &Pessoa.Ano_Nascimento);
	
	printf("Carteira de trabalho: ");
	scanf("%d", &Pessoa.Cateira_Trabalho);
	
	if(Pessoa.Cateira_Trabalho == 0){
		printf("\nA carteira de trabalho deve ser diferente de 0!\n");
		return 0;
	}else{
		printf("Ano de contratacao: ");
		scanf("%d", &Pessoa.Ano_Contratacao);
		printf("Salario: R$ ");
		scanf("%d", &Pessoa.Salario);
	}
	idade = 2020-Pessoa.Ano_Nascimento;
	aposentar = Pessoa.Ano_Contratacao + 35;
	aposentar = aposentar - Pessoa.Ano_Nascimento;
	
	printf("\n---------- Amostragem ----------\n\n\n");
	
	printf("%s tem %d anos\n", Pessoa.Nome, idade);
	printf("Foi contratado(a) em %d\n", Pessoa.Ano_Contratacao);
	printf("Seu salario eh: R$ %d\n", Pessoa.Salario);
	printf("Se aposentara com %d anos.\n", aposentar);

	return 0;
}
