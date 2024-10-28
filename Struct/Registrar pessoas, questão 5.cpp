#include <stdio.h>

struct Registro_Nascimento
{
	int Dia;
	int Mes;
	int Ano;
};

struct Registro_Pessoas
{
	char Nome[100];
	float altura;
	struct Registro_Nascimento Data;
}
Pessoa[3];

int main(){
	int i=0;
	
	printf("\n---------- Cadastro de pessoas ----------\n\n");
	
	for(i=0; i<3; i++){
	printf("\nInsira o nome da pessoa %d: ", i+1);
	scanf("%s", &Pessoa[i].Nome);
	
	printf("Digite a altura da pessoa %d: ", i+1);
	scanf("%f", &Pessoa[i].altura);
	
	printf("Digite a data de nascimento da pessoa %d, composto por dia, mes e ano:\n", i+1);
	scanf("%d", &Pessoa[i].Data.Dia);
	scanf("%d", &Pessoa[i].Data.Mes);
	scanf("%d", &Pessoa[i].Data.Ano);
	}
	
	printf("\n---------- Leitura dos dados ----------\n\n");
	
	for(i=0; i<3; i++){
	printf("\nDados da pessoa %d\n", i+1);
	printf("Nome: %s\n", Pessoa[i].Nome);
	printf("Altura: %.2f\n", Pessoa[i].altura);
	printf("Data de nascimento: %d/%d/%d\n", Pessoa[i].Data.Dia, Pessoa[i].Data.Mes, Pessoa[i].Data.Ano);
	}
	
	return 0;
}
