#include <stdio.h>
#include <string.h>

struct Registro_Telefone
{
	char Tipo[10];
	int DDD;
	int Numero;
	char Operadora[20];
};

struct Registro_Telefone Telefone;

int main(){
	
	printf("\n---------- Cadastro do numero ----------\n\n\n");
	
	printf("Digite o tipo do telefone(Fixo ou celular): ");
	scanf("%s", &Telefone.Tipo);
	
	printf("Digite o DDD do telefone: ");
	scanf("%d", &Telefone.DDD);
	
	printf("Digite o numero do telefone: ");
	scanf("%d", &Telefone.Numero);
	
	printf("Digite qual a operadora do telefone: ");
	scanf("%s", &Telefone.Operadora);
	
	printf("\n\n---------- Leitura dos dados ----------\n\n\n");
	printf("Tipo do telefone: %s\n", Telefone.Tipo);
	printf("DDD do telefone: %d\n", Telefone.DDD);
	printf("Numero do telefone: %d\n", Telefone.Numero);
	printf("Operadora do telefone: %s\n", Telefone.Operadora);

	return 0;
}
