#include <stdio.h>

struct Dados_Horarios
{
	int Horas;
	int Minutos;
	int Segundos;
};

struct Dados_Datas
{
	int Dia;
	int Mes;
	int Ano;
};

struct Lembrete_Compromisso
{
	struct Dados_Horarios Horario;
	struct Dados_Datas Data;
	char Compromisso[100];
}
Lembrete;

int main(){
	
	printf("\n---------- Dados do compromisso ----------\n\n\n");
	
	printf("Digite o horario do compromisso, composto por hora, minutos e segundos:\n");
	scanf("%d", &Lembrete.Horario.Horas);
	scanf("%d", &Lembrete.Horario.Minutos);
	scanf("%d", &Lembrete.Horario.Segundos);
	
	printf("\nDigite a data do compromisso, composto por dia, mes e ano:\n");
	scanf("%d", &Lembrete.Data.Dia);
	scanf("%d", &Lembrete.Data.Mes);
	scanf("%d", &Lembrete.Data.Ano);
	
	printf("\nDescreva o compromisso: ");
	scanf("%s", &Lembrete.Compromisso);
	
	printf("\n---------- Leitura dos dados ----------\n\n\n");
	printf("Horario do compromisso: %d:%d:%d", Lembrete.Horario.Horas, Lembrete.Horario.Minutos, Lembrete.Horario.Segundos);
	printf("\nData do compromisso: %d/%d/%d", Lembrete.Data.Dia, Lembrete.Data.Mes, Lembrete.Data.Ano);
	printf("\nDescricao do compromisso: %s\n", Lembrete.Compromisso);

	return 0;
}
