#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 5

/*
     Jorge Miguel - 0040962113046
     Luiz Otavio - 0040962023018
*/

void telainicial();

//Criando a estrutura de NO da pilha
typedef struct no
{
    int valor;
    struct no *proximo;
}No;

//Criando a estrutura de pilha
typedef struct
{
    No *topo;
}Pilha;

//Criando a operaçao push
void empilhar(Pilha *p, int x)
{
    No *no = malloc(sizeof(No));
    no->valor = x;
    no->proximo = p->topo;
    p->topo = no;
}

//Criando a exibiçao da sequencia da Pilha
void mostrar(No *no)
{
    gotoxy(29,8);
    printf("------- Aguarde -------");

    if(no)
    {
	textcolor(WHITE);
	gotoxy(40,12);
	cprintf("%d", no->valor);
	delay(500);
	gotoxy(40,12);
	printf(" ");
	delay(500);
        mostrar(no->proximo);
    }
}

//Imprimindo os valores da Pilha que o computador gerou
void imprimir(No *no)
{
    if(no)
    {
	textcolor(RED);
	cprintf("%d,", no->valor);
	delay(400);
	imprimir(no->proximo);
    }
}

void imprimir2(int jogadas[MAX])
{
    int x;
    for(x=0; x< MAX; x++)
    {
	textcolor(LIGHTBLUE);
	cprintf("%d,", jogadas[x]);
       delay(400);
    }
}

//Imprimindo os valores que o jogador jogou

void jogar()
{
    int jogadas[MAX];
    int x;
    int op, valor, valor_genius;
    char opc;
    No *no;
    Pilha p;
    p.topo = NULL;

    // Gerando a sequência da pilha que o computador irá gerar randomicamente e empilhando na memória
	 for(x=0 ; x<MAX; x++)
	 {
		valor_genius = (rand() % 4);
		empilhar(&p, valor_genius);
	 }

	 textcolor(WHITE);
	 printf("                                                                           \n");
	 printf("                                                                           \n");
	 printf("                                                                           \n");
	 printf("                                                                           \n");
	 printf("    ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    ÓÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ½\n");
	 printf("                                                                           \n");
	 printf("    ÖÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ·\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º\n");
	 printf("    º                                                                     º");

	 gotoxy(29,8);
	 cprintf("-----------------------");

	 delay(550);

	 // Mostrando a sequência para o jogador
	 mostrar(p.topo);

	 // Jogador irá tentar repetir a sequência do computador
	 for(x=0; x<MAX; x++)
	 {
		gotoxy(29,8);
		printf("-------- Jogue --------");
		gotoxy(40,4);
		cprintf("%d", x+1);
		gotoxy(40,12);
		scanf("%d", &op);
		jogadas[x] = op;

		gotoxy(40,12);
		putchar(' ');
	 }

	 gotoxy(40,4);
	 putchar(' ');

	 gotoxy(29,8);
	 cprintf("-----------------------");

	 // Mostrando a pilha do computador
	 textcolor(RED);
	 gotoxy(34,15);
	 cprintf("Pilha do Jogo\n");
	 gotoxy(35,16);
	 imprimir(p.topo);

	 // Mostrando a Pilha do Jogador
	 textcolor(LIGHTBLUE);
	 gotoxy(31,18);
	 cprintf("Jogadas do Jogador");
	 gotoxy(35,19);
	 imprimir2(jogadas);

	 delay(700);
	 textcolor(WHITE);
	 gotoxy(25,22);
	 cprintf("Vai jogar de novo z‚ ruela?????");

	 getch();

	 clrscr();
	 telainicial();
}

void telainicial()
{
	char opc = ' ', cor;

	do
	{
	   cor = rand() % 3;

	   switch(cor)
	   {
	      case 0:
		textcolor(LIGHTBLUE);
		break;
	      case 1:
		textcolor(GREEN);
		break;
	      case 2:
		textcolor(RED);
		break;
	      case 3:
		textcolor(YELLOW);
		break;
	   }

	   printf("\n");
	   printf("                                                          Programa‡ao Avan‡ada\n");
	   printf(" Jorge Miguel - Luiz Ot vio                                     Jogos Digitais\n");
	   printf("ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ");
	   printf("\n");
	   cprintf("        ²²²²²²²²²  ²²²²²²²  ²²²±     ²²   ²²  ²²    ²²   ²²²²²²²²   ²² ");
	   printf("\n");
	   cprintf("        ²²±±±±±±   ²²±±±±   ²²²²±    ²²±  ²²± ²²±   ²²± ²²±±±±±±    ²²±");
	   printf("\n");
	   cprintf("        ²²±        ²²±      ²²²²±    ²²±  ²²± ²²±   ²²± ²²±         ²²±");
	   printf("\n");
	   cprintf("        ²²±        ²²±      ²²± ²²±  ²²±  ²²± ²²±   ²²± ²²±         ²²±");
	   printf("\n");
	   cprintf("        ²²±  ²²²²  ²²²²²²   ²²± ²²±  ²²±  ²²± ²²±   ²²±  ²²²²²²²±   ²²±");
	   printf("\n");
	   cprintf("        ²²±    ²²± ²²±±±    ²²±  ²²± ²²±  ²²± ²²±   ²²±        ²²±  ²²±");
	   printf("\n");
	   cprintf("        ²²±    ²²± ²²±      ²²±  ²²± ²²±  ²²± ²²±   ²²±        ²²±  ²²±");
	   printf("\n");
	   cprintf("        ²²±    ²²± ²²±      ²²±   ²²²²²±  ²²±  ²²± ²²±±        ²²±   ±±");
	   printf("\n");
	   cprintf("        ²²²²²²²²²± ²²²²²²²± ²²±   ²²²²²±  ²²±   ²²²²±±  ²²²²²²²²±±  ²² ");
	   printf("\n");
	   cprintf("         ±±±±±±±±±  ±±±±±±±  ±±    ±±±±±   ±±    ±±±±    ±±±±±±±±    ±±");
	   printf("\n");
	   printf("\nÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ\n");
	   printf("                                   S - Sair                                     \n");
	   printf("                                   J - Jogar                                    \n");
	   printf("\n");
	   printf("");

	   opc = getch();

	   clrscr();

	}while((opc != 's') && (opc != 'j'));

	switch(opc)
	{
	   case 's':
	      exit(1);
	      break;
	   case 'j':
	      jogar();
	      break;
	}
}

int main()
{
    clrscr();

    srand(time(NULL));
    telainicial();

    return 0;
}