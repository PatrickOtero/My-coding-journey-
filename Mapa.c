#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define QTD 200

 struct projs {
 	
 	int ano;
	int cod;
	char tit[30];
	char desc[100];
	int stats;
	char grProj[20];
	char emp[30];
	float orc;
	int dur;
	
};

int qtd = 0;

int Menu() {
	   
	   int opc;
	   
	   printf ("\n               |--- ATIVIDADE MAPA DE ALGORITMOS E LOGICA DE PROGRAMACAO II ---|");
	   printf ("\n               |    Nome do aluno: Patrick da Rocha Otero                      |");
	   printf ("\n               |    RA: 21037450-5                                             |");
	   printf ("\n               |---------------------------------------------------------------|");
	   printf ("\n                    |---------------------------------------------------| ");
	   printf ("\n                    |    >>>>>>>>>> GERENCIADOR DE PROJETOS <<<<<<<<<   | ");
	   printf ("\n                    |---------------------------------------------------| ");
	   printf ("\n                    |    (1) - Cadastrar um projeto                     | ");
	   printf ("\n                    |    (2) - Listar projetos                          | ");
	   printf ("\n                    |    (3) - Projetos a fazer                         | ");
	   printf ("\n                    |    (4) - Projetos em andamento                    | ");
	   printf ("\n                    |    (5) - Projetos concluidos                      | ");
	   printf ("\n                    |    (6) - Procurar projetos por ano                | ");
	   printf ("\n                    |    (0) - Encerrar o programa                      | ");
	   printf ("\n                    |---------------------------------------------------| ");
	   
	   printf ("\n                    |-----------------|");
	   printf ("\n                    |Escolha uma opcao|");
	   printf ("\n                    |-----------------|\n");
	   printf ("\n                    | Resposta:");
	   scanf ("%d", &opc);
	   fflush(stdin);

	   return (opc);
	   
	   
}

void cad(struct projs proj[QTD]) {
	
	int para;
	   
	   para = 0;
	   
	   if (qtd < QTD) {
	   	
	   while (qtd < QTD && para != 2) {
	   	
	   	    para = 0;
	   	
	   	         qtd++;
	   	         proj[qtd].cod = qtd;
	   	         
	   	         printf ("\n|-----------------------|");
	   	         printf ("\n| PROJETO DE CODIGO: %d |", qtd);
	   	         printf ("\n|-----------------------|");
	   		    
	   	
	   	        printf ("\n ------ Informe o titulo do projeto:\n");
	   	        printf (" Resposta: ");
	   	        gets (proj[qtd].tit);
	   	        fflush (stdin);
		   
		    	printf ("\n ------ Informe a descricao do projeto:\n");
		   	    printf (" Resposta: ");
		   	    gets (proj[qtd].desc);
		   	    fflush (stdin);
		   	    
		   	    printf ("\n ------ Informe a empresa do projeto:\n");
		   	    printf (" Resposta: ");
		   	    gets (proj[qtd].emp);
		   	    fflush (stdin);
		   	    
		   	    printf ("\n ------ Informe o orcamento do projeto:\n");
		   	    printf (" Resposta: ");
		   	    scanf ("%f", &proj[qtd].orc);
		   	    fflush (stdin);
		   	    
		   	    do {
	            
	            system ("cls");
	            
		   	    printf ("\n ------ Informe o status do projeto:");
		   	    printf ("\n|-----------------------|");
		   	    printf ("\n| (1) - A fazer         |");
		   	    printf ("\n| (2) - Em andamento    |");
		   	    printf ("\n| (3) - Concluido       |");
		   	    printf ("\n|-----------------------|\n");
		   	    printf (" Resposta: ");
		   	    scanf ("%d", &proj[qtd].stats);
		   	    fflush (stdin);
		   	    
		   	    if (proj[qtd].stats != 1 && proj[qtd].stats != 2 && proj[qtd].stats != 3) {
		   	    	printf (" --- OPCAO INVALIDA ! --- ");
		   	    	system ("Pause");
				   }
		   	    
		   	   } while (proj[qtd].stats != 1 && proj[qtd].stats != 2 && proj[qtd].stats != 3);
	            
		   	    printf ("\n ------ Informe a duracao do projeto em dias:\n");;
		   	    printf (" Resposta: ");
		   	    scanf ("%d", &proj[qtd].dur);
		   	    fflush (stdin);
		   	    
		   	    printf (" ------ Informe o ano do projeto:\n");
		   	    printf (" Resposta: ");
		   	    scanf ("%d", &proj[qtd].ano);
		   	    fflush (stdin);
		   	  
		   	    printf (" ------ Informe o nome do gerente do projeto:\n");
		   	    printf (" Resposta: ");
		   	    gets (proj[qtd].grProj);
		   	    fflush (stdin);
		   	    
		   	    do {
		   	  
		   	     if (qtd < QTD) {
		   	     	
		   	     	if (para != 1 && para != 2) {
					
		   	     	system ("cls");
		   	     	printf ("\n   |------------------------------|");
		   	     	printf ("\n   | >>> O que deseja fazer ? <<< |");
		   	     	printf ("\n   |------------------------------|");
		   	     	printf ("\n ");
		   	        printf ("\n   |--------------------------------|");
		   	        printf ("\n   | > Cadastrar mais um projeto? < |");
				    printf ("\n   |--------------------------------|");	  
				    printf ("\n   | (1) - Sim                      |");
				    printf ("\n   | (2) - Nao                      |");
				    printf ("\n   |--------------------------------|\n");;
				    scanf ("%d", &para);	  
				    fflush (stdin);
				    
				} else {
				 	
				 	 printf (" |--------------------------------------------|");
	   	             printf (" |>>> Insira apenas os valores indicados! <<< |");
	   	             printf (" |--------------------------------------------|");
	   	             system ("Pause");
	   	         }
				 	
				 } else {
				 	
	   	             printf (" |-------------------------------------|");
	   	             printf (" |>>> limite de projetos atingido! <<< |");
	   	             printf (" |-------------------------------------|");
	   	             para = 2;
	   	             system ("Pause");
	   } 
	   } while (qtd < QTD && para != 1 && para != 2);                 	
		   	 
	  } 
      } else {
      	
      	   printf (" |-------------------------------------|");
	   	   printf (" |>>> limite de projetos atingido! <<< |");
	   	   printf (" |-------------------------------------|");
	   	   system ("Pause");
	   	             
	  }
}
        
void listTodos(struct projs proj[QTD]) {
	
	int qtd2 = 1;

    if (qtd >= 1) {
	
	while (qtd2 <= qtd) {
	
		          printf ("\n --------------------------------");
		          printf ("\n           PROJETO DE CODIGO %d  ", proj[qtd2].cod);
		          printf ("\n --------------------------------");
	          	  printf ("\n            >>> Titulo: %s <<<   ", proj[qtd2].tit);
		          printf ("\n --------------------------------");
		          printf ("\n            Empresa: %s          ", proj[qtd2].emp);
		          printf ("\n            Ano: %d              ", proj[qtd2].ano);
		          printf ("\n            Status: %d           ", proj[qtd2].stats);
		          printf ("\n            Gerente: %s          ", proj[qtd2].grProj);
		          printf ("\n            Orcamento: R$ %.2f   ", proj[qtd2].orc);
		          printf ("\n            Duracao: %d (dias)   ", proj[qtd2].dur);
		          printf ("\n --------------------------------");
		          printf ("\n            Descricao: %s        ", proj[qtd2].desc);
		          printf ("\n ------------------------------\n");
	
	    qtd2 ++;
	
	}
} else {
		
	 printf ("\n |-------------------------------|");
	 printf ("\n | -- Nao ha nenhum projeto ! -- |");
	 printf ("\n |-------------------------------|\n");
}
	  system ("Pause");
}

void aFaz(struct projs proj[QTD]) {
	
	system ("cls");
	int qtd2 = 1;
	
	    if (qtd >= 1) {
	    	
	    	while (qtd2 <= qtd) {
	
		       if (proj[qtd2].stats == 1) {
		
		          printf ("\n --------------------------------");
		          printf ("\n           PROJETO DE CODIGO %d  ", proj[qtd2].cod);
		          printf ("\n --------------------------------");
	          	  printf ("\n            >>> Titulo: %s <<<   ", proj[qtd2].tit);
		          printf ("\n --------------------------------");
		          printf ("\n            Empresa: %s          ", proj[qtd2].emp);
		          printf ("\n            Ano: %d              ", proj[qtd2].ano);
		          printf ("\n            Status: %d (A fazer) ", proj[qtd2].stats);
		          printf ("\n            Gerente: %s          ", proj[qtd2].grProj);
		          printf ("\n            Orcamento: R$ %.2f   ", proj[qtd2].orc);
		          printf ("\n            Duracao: %d (dias)   ", proj[qtd2].dur);
		          printf ("\n --------------------------------");
		          printf ("\n            Descricao: %s        ", proj[qtd2].desc);
		          printf ("\n ------------------------------\n");
		        
			   }
	    
	    qtd2++;
	    
		}
	    
		  system ("Pause");
	
       } else {
	
	        printf ("\n |-----------------------------------------------|");
	        printf ("\n | ---- Nao ha nenhum projeto para exibir ! ---- |");
	        printf ("\n |-----------------------------------------------|\n");
	        
	        system ("Pause");
    }
  }

void emAnd(struct projs proj[QTD]) {
	
	system ("cls");
	int qtd2 = 1;
	
	    if (qtd >= 1) {
	    	
	    	while (qtd2 <= qtd) {
	
		       if (proj[qtd2].stats == 2) {
		
		          printf ("\n --------------------------------");
		          printf ("\n           PROJETO DE CODIGO %d  ", proj[qtd2].cod);
		          printf ("\n --------------------------------");
	          	  printf ("\n            >>> Titulo: %s <<<   ", proj[qtd2].tit);
		          printf ("\n --------------------------------");
		          printf ("\n            Empresa: %s          ", proj[qtd2].emp);
		          printf ("\n            Ano: %d              ", proj[qtd2].ano);
		          printf ("\n            Status: %d (Fazendo) ", proj[qtd2].stats);
		          printf ("\n            Gerente: %s          ", proj[qtd2].grProj);
		          printf ("\n            Orcamento: R$ %.2f   ", proj[qtd2].orc);
		          printf ("\n            Duracao: %d (dias)   ", proj[qtd2].dur);
		          printf ("\n --------------------------------");
		          printf ("\n            Descricao: %s        ", proj[qtd2].desc);
		          printf ("\n ------------------------------\n");
		          
		}
		
	       qtd2++;
	}
	        
	        system ("Pause");
	
       } else {
	
	        printf ("\n |-----------------------------------------------|");
	        printf ("\n | ---- Nao ha nenhum projeto para exibir ! ---- |");
	        printf ("\n |-----------------------------------------------|\n");
	        
	        system ("Pause");
    }
  }
  
void projConc(struct projs proj[QTD]) {
	
	system ("cls");
	
	int qtd2 = 1;
	
	    if (qtd >= 1) {
	    	
	    	while (qtd2 <= qtd) {
	
		       if (proj[qtd2].stats == 3) {
		
		          printf ("\n ---------------------------------");
		          printf ("\n           PROJETO DE CODIGO %d   ", proj[qtd2].cod);
		          printf ("\n ---------------------------------");
	          	  printf ("\n            >>> Titulo: %s <<<    ", proj[qtd2].tit);
		          printf ("\n ---------------------------------");
		          printf ("\n            Empresa: %s           ", proj[qtd2].emp);
		          printf ("\n            Ano: %d               ", proj[qtd2].ano);
		          printf ("\n            Status: %d (Concluido)", proj[qtd2].stats);
		          printf ("\n            Gerente: %s           ", proj[qtd2].grProj);
		          printf ("\n            Orcamento: R$ %.2f    ", proj[qtd2].orc);
		          printf ("\n            Duracao: %d (dias)    ", proj[qtd2].dur);
		          printf ("\n ---------------------------------");
		          printf ("\n            Descricao: %s         ", proj[qtd2].desc);
		          printf ("\n -------------------------------\n");	         
    }
    
	  qtd2++;
	  
	}
	
	  system ("Pause");
	  
       } else {
	
	        printf ("\n |-----------------------------------------------|");
	        printf ("\n | ---- Nao ha nenhum projeto para exibir ! ---- |");
	        printf ("\n |-----------------------------------------------|\n");
	        
	        system ("Pause");
    }
  }

void procAno(struct projs proj[QTD]) {
	
	int enc = 0;
	int ano = 0;
	int qtd2 = 1;
	
	if (qtd >= 1) {
		
		    printf ("\n |--------------------------------------|");
	        printf ("\n |     -- Digite o ano do projeto: --   |");
	        printf ("\n |--------------------------------------|\n");
	        printf (" Resposta: ");
	        scanf ("%d", &ano);
	        
while (qtd2 <= qtd && enc == 0) {
	
	if (ano == proj[qtd2].ano) {
	
		          printf ("\n --------------------------------");
		          printf ("\n           PROJETO DE CODIGO %d  ", proj[qtd2].cod);
		          printf ("\n --------------------------------");
	          	  printf ("\n            >>> Titulo: %s <<<   ", proj[qtd2].tit);
		          printf ("\n --------------------------------");
		          printf ("\n            Empresa: %s          ", proj[qtd2].emp);
		          printf ("\n            Ano: %d              ", proj[qtd2].ano);
		          printf ("\n            Status: %d           ", proj[qtd2].stats);
		          printf ("\n            Gerente: %s          ", proj[qtd2].grProj);
		          printf ("\n            Orcamento: R$ %.2f   ", proj[qtd2].orc);
		          printf ("\n            Duracao: %d (dias)   ", proj[qtd2].dur);
		          printf ("\n --------------------------------");
		          printf ("\n            Descricao: %s        ", proj[qtd2].desc);
		          printf ("\n ------------------------------\n");
		          
		enc = 1;
		system ("Pause");
	}
	
	  qtd2++;
  } 
  
}else {
	
	        printf ("\n |----------------------------------------|");
	        printf ("\n | -- A lista de projetos esta vazia ! -- |");
	        printf ("\n |----------------------------------------|\n");
	        
	   system ("Pause");
}

if (enc == 0) {
	
	        printf ("\n |--------------------------------------------|");
	        printf ("\n | -- Nao ha nenhum projeto com tal ano ! -- |");
	        printf ("\n |------------------------------------------|\n");
	        
	   system ("Pause");
	
}

}

int main() {
	
	struct projs proj[QTD];
	int opc;
	
	do {
		
	  system ("cls");
		
	  opc = Menu();
	 
	  if (opc == 1) {
	  	system ("cls");
	  	cad(proj);
	  }
	  
	  if (opc == 2) {
	    system ("cls");
	  	listTodos(proj);
	  }
	  
	  if (opc == 3) {
	  	aFaz(proj);
	  }	
	  
	  if (opc == 4) {
	  	emAnd(proj);
	  }
	  
	  if (opc == 5) {
	  	projConc(proj);
	  }
	  
	  if (opc == 6) {
	  	system ("cls");
	  	procAno(proj);
	  }
		
	} while (opc != 0);
		
	
		
		printf (" ---- Gerenciador Encerrado ---- ");
		
	    return (0);
}
