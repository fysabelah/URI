#include<stdio.h>

void codigoArea(int );

int main()
{
	int codigo;
	
	scanf("%d",&codigo);
	
	codigoArea(codigo);
	
	return(0);
}

void codigoArea(int codigo)
{
	switch(codigo)
	{
		case (61):
			printf("Brasilia\n");
			break;
		case (71):
			printf("Salvador\n");
			break;
		case (11):
			printf("Sao Paulo\n");
			break;
		case (21):
			printf("Rio de Janeiro\n");
			break;
		case (32):
			printf("Juiz de Fora\n");
			break;
		case (19):
			printf("Campinas\n");
			break;
		case (27):
			printf("Vitoria\n");
			break;
		case (31):
			printf("Belo Horizonte\n");
			break;
		default:
			printf("DDD nao cadastrado\n");
	}
}