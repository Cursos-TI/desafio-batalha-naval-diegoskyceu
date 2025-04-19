#include <stdio.h>

int main(){


    //DECLARAÇÃO DE VARIAVEIS
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //TITULO DO JOGO
    printf("TABULEIRO BATALHA NAVAL \n");
    printf("   ");//AJUSTE DAS LETRAS PARA FICAR DE ACORDO COM A COLUNA

    for (int i = 0; i < 10; i++) //NUMERO DE LINHAS(A - J)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");

    for (int i = 1; i <= 10; i++) //NUMERO DE LINHAS
    {
        if (i != 10)//AJUSTE DO NUMERO 10
        {
            printf(" %d ", i);
        }else{
            printf("%d ", i);
        }        
        
        for (int j = 0; j < 10; j++) //POSIÇOES DOS NAVIOS
        {
            if (j && i > 2 && j < 4 && i < 4) //NAVIO NA HORIZONTAL
            {
               printf("1 ");
            }else{  
                if (j == 5 && i >= 7 && i <= 9) //NAVIO NA VERTICAL
                {
                    printf("1 ");
                } else{        
                    printf("0 ");
                }
            }
                            
        }        

        printf("\n");
    }
    


    return 0;
}