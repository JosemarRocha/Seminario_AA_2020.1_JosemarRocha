#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char ponto_atual, char destino, char auxiliar){
    if(n==1){
        printf("\n Movendo disco 1 da coluna %c para %c", ponto_atual, destino);
        return;
    }
    hanoi(n-1, ponto_atual, auxiliar, destino);
    printf("\n Movendo disco %d da coluna %c para %c", n , ponto_atual, destino);
    hanoi(n-1, auxiliar, destino, ponto_atual);
}


int main()
{
    int n = 3; //número de discos
    hanoi(n, 'A', 'C', 'B');
    return 0;
}
