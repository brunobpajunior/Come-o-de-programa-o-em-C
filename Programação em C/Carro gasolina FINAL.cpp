#include<stdio.h>

int main ()
{
	int kmlitro = 12;
	float vtempo;
	float vvelmedia;
	
	printf("informe o tempo gasto na viagem em horas:");
    scanf("%f", &vtempo);
		
		printf("informe a velocidade média em KM/H:");
		scanf("%f", &vvelmedia);
	
	//se caso quisesse saber a distância era so por o printf
	float vDistancia = vtempo * vvelmedia;
	float vConsumo = vDistancia / kmlitro;
	
	printf("\nO consumo foi de: %-7.2f litros", (vConsumo));
	
	return 0;
	
}
