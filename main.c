// EXERCÍCIOS TARGET SISTEMAS

//Exercício 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int INDICE = 13, SOMA = 0, K = 0;
    
    while (K < INDICE)
    {
        K = K+1;
        SOMA = SOMA + K;
    }
    
    printf("%d\n", SOMA);

    return 0;
}

//RESULTADO: 91

/* ________________________________________________ */

//Exercício 2
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A, B, AUX, i, VALOR;

    A = 0;
    B = 1;

    printf("Digite um número: ");
    scanf("%d", &VALOR);
    printf("Fibonacci:\n");
    printf("%d, ", A);
    printf("%d, ", B);

    for(i = 0; i < VALOR; i++) {

        AUX = A + B;
        A = B;
        B = AUX;

        printf("%d, ", AUX);
        
        if (AUX > VALOR) {
            printf("\nO valor %d NAO esta dentro da sequencia de Fibonacci!", VALOR);
            return 0;
        }
        if (AUX == VALOR) {
            printf("\nO valor %d esta dentro da sequencia de Fibonacci!", VALOR);
            return 0;
        }
    }
}

/* ________________________________________________ */

// Exercício 3
a) 1, 3, 5, 7, 9 (soma 2 a cada posição da sequência)
b) 2, 4, 8, 16, 32, 64, 128 (vai dobrando o valor)
c) 0, 1, 4, 9, 16, 25, 36, 49 (vai aumentando em valores ímpares crescentes)
d) 4, 16, 36, 64, 100 (números pares em ordem crescente à partir do 2, elevados ao quadrado)
e) 1, 1, 2, 3, 5, 8, 13 (Fibonacci)
f) 2, 10, 12, 16, 17, 18, 19, 200 (números que começam com a letra D)


/* ________________________________________________ */

// Exercício 4 
Liga interruptor 1 e 3 
Vai pra sala 1 
    se luz 1 está acesa, sei que interruptor 2 é para luz 2 ou 3 
    ou se luz 1 está apagada, sei que interruptor 2 é para luz 1
Volta pra sala inicial
Desliga interruptor 1 e 3 
Liga interruptor 3 
Vai pra sala 2 
    se luz 2 está acesa, e interruptor 2 liga luz 1
        então interruptor 3 liga luz 2 
        RESULTADO = interruptor 1 liga luz 3; interruptor 2 liga luz 1; interruptor 3 liga luz 2;
    ou se luz 2 está apagada, e interruptor 2 liga luz 1
        então interruptor 3 liga luz 3 
        RESULTADO = interruptor 1 liga luz 2; interruptorinterruptor 2 liga luz 1; interruptor 3 liga luz 3;
    ou se luz 2 está acesa, e interruptor 2 não liga luz 1 
        então interruptor 3 liga luz 2 
        RESULTADO = interruptor 1 liga luz 1, interruptor 2 liga luz 3, interruptor 3 liga luz 2
    ou se luz 2 está apagada, e interruptor 2 não liga luz 1 
        então interruptor 3 liga luz 3
        RESULTADO = interruptor 1 liga luz 1; interruptor 2 liga luz 2; interruptor 3 liga luz 3;


/* ________________________________________________ */

// Exercício 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    char NOME[255];
    int TAMANHO;
    int i = 0;
    
    printf("Digite uma palavra: ");
    scanf("%254[^\n]", NOME);
    TAMANHO = strlen(NOME);
    
    printf("Essa palavra ao contrario fica assim: ");
    for(i = TAMANHO - 1; i >= 0; i--){
        printf("%c", NOME[i]);
    }

    return 0;
}