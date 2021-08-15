

#include <stdio.h>
#include <stdlib.h>

#define REAJ 7.5


int main() {
	float sal, aum, apsal;
	int opc, opc1;
	
	do {
		system("cls");
		
		printf ("\n |--- ATIVIDADE I DE ALGORITMOS E LOGICA DE PROGRAMACAO II ---|");
		printf ("\n |    Nome do aluno: Patrick da Rocha Otero                   |");
		printf ("\n |    RA: 21037450-5                                          |");
		printf ("\n |------------------------------------------------------------|");
		printf ("\n |             ||||| EMPRESA NOVATECH ||||                    |");
		printf ("\n |                Bem vindo colaborador!                      |");
		printf ("\n |                                                            |");
		printf ("\n |                 O que deseja fazer?                        |");
		printf ("\n |                                                            |");
		printf ("\n |          (1) - Verificar reajuste salarial                 |");
		printf ("\n |          (0) - Encerrar o programa                         |");
		printf ("\n |          (?) - Escolha uma opcao:                          |");
		printf ("\n |--------|            |--------------------------------------|");
		printf ("\n-------------| - ");
		scanf ("%d", &opc);
		fflush(stdin);
	
	if (opc == 1) {
		do {
		
		system("cls");
		
	    printf ("\n  |-------------------------------------------------|");
		printf ("\n  |          ----- REAJUSTE SALARIAL -----          |");
	    printf ("\n  |-------------------------------------------------|");
		printf ("\n");
		printf("\n -- Colaborador, insira seu salario liquido: \n -----|");
		scanf ("%f", &sal);
		fflush(stdin);
		
		if (sal <= 1750) {
			printf ("\n  |-------------------------------------------------|");
			printf ("\n  | Voce tem direito ao abono salarial de R$ 150,00 |");
			printf ("\n  |-------------------------------------------------|");
			printf ("\n");
			aum = sal * (REAJ/100);
			apsal = (sal * (REAJ/100) + sal) + 150;
			printf ("\n  |----------------------------------------------|");
			printf ("\n  | - Aumento devido ao reajuste: R$ %.2f      |", aum);
			printf ("\n  | - Reajuste com o abono: R$ %.2f            |", aum + 150);
			printf ("\n  | - Salario aproximado: R$ %.2f             |", apsal);
			printf ("\n  |----------------------------------------------|");
			
		} else {
			printf ("\n  |----------------------------------------------|");
		    printf ("\n  | -- Voce nao tem direito ao abono salarial -- | ");
		    printf ("\n  |----------------------------------------------|");
		    printf ("\n");
			aum = sal * (REAJ/100);
			apsal = (sal * (REAJ/100) + sal);
			printf ("\n  |----------------------------------------------|");
			printf ("\n  | - Aumento devido ao reajuste: R$ %.2f      |", aum);
			printf ("\n  | - Salario aproximado: R$ %.2f             |", apsal);
			printf ("\n  |----------------------------------------------|");
		}
		printf ("\n  |----------------------------------------------|");
		printf ("\n  |  - Deseja analisar outros valores salariais? |");
		printf ("\n  | (1) - Sim                                    |");
		printf ("\n  | (2) - Nao                                    |");
		printf ("\n  |----------------------------------------------|");
		printf ("\n ------|");
		scanf ("%d", &opc1);
		fflush(stdin);
		
	} 
	while (opc1 != 2);
	}
} while (opc != 0);
printf (" --- Obrigado e volte sempre! --- ");
return (0);
}
