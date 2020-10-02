#include<stdio.h>

int main()
{
    float nota1;
    float nota2;
    float soma_das_notas;
    float media;

	printf("digite o valor da sua primeira nota:\n");
	scanf("%f", &nota1);
	
    printf("digite o valor da sua segunda nota:");
    scanf("%f", &nota2);
    
    soma_das_notas = nota1 + nota2;
    
    
    media = soma_das_notas /2;
	
	printf ("o valor da sua media é = %f", media);
    
    return 0;
    
    

	
	
	
	
	
}
