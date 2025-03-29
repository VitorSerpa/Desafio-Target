#include <stdio.h>

void isFibonacci(int number){
    int a = 0, b = 1, aux;
    while (1)
    {
        if (number < a)
        {
            printf("O numero %d não pertence ao Fibonacci", number);
            break;
        }
        if (number == a)
        {
            printf("O numero %d pertence ao Fibonacci", number);
            break;
        }
        aux = a;
        a = a + b;
        b = aux;
    }
}

int n;
int main(){
    printf("Digite o numero a ser verificado:");
    scanf("%d", &n); 

    isFibonacci(n);

    return 0;
}

