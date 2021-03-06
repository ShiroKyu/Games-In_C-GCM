
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#include "jogoMemoria.h"

void inicializa(int TAMANHO,int tempo){
	system("cls");
	int a = 0,b = 0,acertos = 0;
	char f;
	int numeros[TAMANHO];
	int respostas[TAMANHO];

	
//inclus�o de linguagem
setlocale(LC_ALL,"Portuguese");

//inclus�o de titulo no console;

//gera os numeros aleat�rios
srand(time(NULL));

printf("\nO programa gera %d numeros aleatorios entre 1 e 25\n",TAMANHO);
printf("Decore os numeros exibidos, e ap�s %d segundos \nreescreva-os na tela na mesma ordem\n\n",tempo);

printf("Start Game -[ENTER]");

//corresponde ao enter, com o valor de 13 pela tabela ascii
do{
	f = getch();
}while(f != 13);

for(a = 0; a < TAMANHO ; a++){
	numeros[a] = (rand() % 25) + 1;
}
//defini��o do tempo de amostra
b = tempo;

do{
	system("cls");
	printf("Decore a sequencia de numeros abaixo em %d s:\n\n",b);
	b--;
	//comando de repeticao para mostrar os numeros criados aleatoriamente;
	

	for(a = 0;a < TAMANHO; a++){
		printf("%d\t", numeros[a]);
	}
	//sleep-para o programa por um determinado tempo;
	Sleep  (1000);
}while(b > 0);

  	system ("cls");
    printf ("Informe os n�meros que foram exibidos\n\n");
   

    for (a = 0;a < TAMANHO; a++){
        printf ("\t%d� n�mero: ", a+1);
        scanf ("%d", &respostas[a]);
        if (respostas[a] == numeros[a]){
            acertos++;
        }
    }
   
    if (acertos==TAMANHO){
        printf ("\n\nParab�ns! Voc� acertou todos. Veja os numeros:\n\n\t");
        for (a = 0;a < TAMANHO;a++){
            printf ("%d\t", numeros[a]);
        }
    }
    else
    {
        printf ("\n\nQue pena! Tente outra vez. Veja os n�meros exibidos:\n\n\t");

        for (a = 0;a < TAMANHO; a++){

            printf ("%d\t", numeros[a]);
        }
    }
    printf ("\n\n");
	system("pause");
    system("cls");
}

void menu(int opc){
    int tempo,TAMANHO;

    switch(opc){
    case 1:
        TAMANHO = 4;
        tempo = 10;
        inicializa(TAMANHO,tempo);
        break;
    case 2:
        TAMANHO = 6;
        tempo = 7;
        inicializa(TAMANHO,tempo);
        break;
    case 3:
        TAMANHO = 8;
        tempo = 5;
        inicializa(TAMANHO,tempo);
        break;
    default: printf("Opc�o inv�lida");
	}

}
