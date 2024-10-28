#include <stdio.h>
#include <string.h>

struct Registro_Pessoas
{
	char Nome[40];
	char Sexo[2];
	int Idade;
}
Cadastro[5];

int main(){
	int i=0;
	float media=0;
	
	printf("\n---------- Cadastro de pessoas ----------\n\n\n");
	
	for(i=0; i<5; i++){
	printf("Digite o nome da pessoa %d: ", i+1);
	scanf("%s", &Cadastro[i].Nome);
	
	printf("Digite o sexo (M/F) da pessoa %d: ", i+1);
	scanf("%s", &Cadastro[i].Sexo);
	
	printf("Digite a idade da pessoa %d: ", i+1);
	scanf("%d", &Cadastro[i].Idade);
	
	printf("\n");
	}
	
	for(i=0; i<5; i++){
		media = (Cadastro[i].Idade + media);
	}
	media = media/5;
	
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	
	for(i=0; i<5; i++){
	printf("Nome da pessoa %d: %s\n", i+1, Cadastro[i].Nome);
	printf("Sexo (M/F) da pessoa %d: %s\n", i+1, Cadastro[i].Sexo);
	printf("Idade da pessoa %d: %d\n\n", i+1, Cadastro[i].Idade);
	}
	
	printf("A media de idade eh: %.2f\n\n", media);
	
	for(i=0; i<5; i++){
		if(Cadastro[i].Idade >= media){
			printf("%s possui idade maior ou igual a media.\n", Cadastro[i].Nome);
		}
	}
	
	return 0;
}
