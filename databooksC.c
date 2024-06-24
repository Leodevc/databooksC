#include <stdio.h>

//Programa de cadastro e impressão de dados de até 5 livros.

struct dados{         //Stuct para estruturar os dados dos livros.
    char titulo[50]; 
    char autor[50];   //Strings dos dados com título, autor, ano e ISBN.
    int ano;
    char ISBN [50];

};      
int main(){                        
    struct dados livro[5];  //Utilizando a "Struct dados" e atribuindo a variável "livro" com apenas 5 espaços na memória.

    for(int i = 0; i< 5; i++){   //Fazendo o looping utilizando a variável "i" como contadora.
        printf("Titulo:\n");
        scanf("%s", &livro[i].titulo);       
        printf("Autor\n");
        scanf("%s", &livro[i].autor);       //Comando de entrada para colocar os dados dos livros.
        printf("Ano\n");
        scanf("%d", &livro[i].ano);
        printf("ISbn\n");
        scanf("%s", &livro[i].ISBN);
    }

    for(int i = 0; i< 5; i++){   //Fazendo novamente um looping para realizar a impressão dos dados.
       
        printf("%s\n", &livro[i].titulo);
        printf("%s\n", &livro[i].autor);       //Comando de impressão dos dados.
        printf("%d\n", &livro[i].ano);
        printf("%s\n", &livro[i].ISBN);
    }
   
    return 0;
}