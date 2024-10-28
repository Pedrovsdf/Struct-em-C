#include <stdio.h>

struct Temp_Cidades
{
	float temp[7];
	float media;
}
Cidade[2];

enum Dias_semana{Domingo=1, Segunda, Terca, Quarta, Quinta, Sexta, Sabado};

char matriz[][20] =
{
"Domingo",
"Segunda",
"Terca",
"Quarta",
"Quinta",
"Sexta",
"Sabado"
};

enum Cadastro_Cidades{Cidade_1=1, Cidade_2};

char cidades[][20] =
{
"Cidade 1",
"Cidade 2"
};

int main(){
	int i=0, j=0, k=0, qtd[2];
	enum Dias_semana Dia;
	enum Cadastro_Cidades CidadeX;
	
	printf("\n---------- Cadastro de temperatura ----------\n\n\n");
	
	for(CidadeX = Cidade_1; CidadeX <= Cidade_2; CidadeX++){
		for(Dia = Domingo; Dia <= Sabado; Dia++){
			if(Dia == Domingo || Dia == Sabado){
				printf("Digite a temperatura registrada na cidade %d no %s: \n", CidadeX, matriz[Dia-1]);
				scanf("%f", &Cidade[CidadeX-1].temp[Dia-1]);
				Cidade[CidadeX-1].media = Cidade[CidadeX-1].media + Cidade[CidadeX-1].temp[Dia-1];
			}else{
				printf("Digite a temperatura registrada na cidade %d na %s: \n", CidadeX, matriz[Dia-1]);
				scanf("%f", &Cidade[CidadeX-1].temp[Dia-1]);
				Cidade[CidadeX-1].media = Cidade[CidadeX-1].media + Cidade[CidadeX-1].temp[Dia-1];
			}
		}
		printf("\n\n");
		k=0;
	}
	
	for(Dia = Domingo; Dia <= Segunda; Dia++){
		Cidade[Dia-1].media = Cidade[Dia-1].media/7;
	}

	for(CidadeX = Cidade_1; CidadeX <= Cidade_2; CidadeX++){
		for(Dia = Domingo; Dia <= Sabado; Dia++){
			if(Cidade[CidadeX-1].temp[Dia-1] > Cidade[CidadeX-1].media){
				qtd[CidadeX-1]++;
			}
		}
	}
	
	printf("\n---------- Leitura dos dados ----------\n\n");
	
	for(Dia = Domingo; Dia <= Segunda; Dia++){
		printf ("A quantidade de dias da semana em que a temperatura da cidade %d esteve acima da media eh de %d dias\n", Dia, qtd[Dia-1]);
	}
	
	return 0;
}
