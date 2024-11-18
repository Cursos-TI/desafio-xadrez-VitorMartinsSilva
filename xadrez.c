#include <stdio.h>

void recursividadeBispo (int n)
{
    if (n>0)
    {
        for (int i = 1; i<=10; i++)
        {
            printf ("Cima\n");
            while (i%2)
            {                                           
               printf ("Direita\n"); 
               i++;
            }          
        }                          
    }    
}    
void recursividadeTorre (int n)
{
    if (n>0)
    {
        printf("Direita\n");
        recursividadeTorre (n-1);
    }
}

void recursividadeRainha (int n)
{
    if (n>0)
    {
        printf("Esquerda\n");
        recursividadeRainha(n-1);
    }
}

int main() 
{
    
    // Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int cavalo = 2;
    
    // Implementação de Movimentação do Bispo    
    printf("Movimento do bispo\n");
    recursividadeBispo(5);
    
    // Implementação de Movimentação da Torre    
        printf("Movimento da Torre\n");
        recursividadeTorre(5);
    
    // Implementação de Movimentação da Rainha    
        printf("Movimento da Rainha\n");
        recursividadeRainha(8);
    
    // Movimentação do Cavalo  
        printf ("Movimento Cavalo\n");
      for (int i = 0; i <= 3; i++)
      {
        if (i<2)
        {
            printf("Cima\n");
            continue;
        }
         
        if (i>=3)
        {
            printf ("Direita\n");
            break;
        }
         
      }
         
      
    return 0;
}
