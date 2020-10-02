#include <stdio.h>

int main ()
{

float despesa;
float salario;
float economia;

printf ("Ola, tudo bem, fiquei sabendo que voce esta querendo economizar, afinal, pandemia, nao se pode dar mole, vamos comecar?\n");
printf ("quanto voce gasta consigo mesmo mensalmente?");
scanf("%f", &despesa);

printf ("Quanto voce ganha mensalmente?");
scanf ("%f", &salario);

economia = salario - despesa;

printf("Voce pode economizar: %f\n", economia);

return 0;
}
