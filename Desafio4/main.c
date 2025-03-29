#include <stdio.h>

float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;
float total;
float porcentagem;

float calculoPorcentagem(float parte, float total){
    float porcentagem = parte / total * 100;
    return porcentagem;
}

int main(){
    total = SP + RJ + MG + ES + Outros;

    printf("Total: %.2f", total);
    porcentagem = calculoPorcentagem(SP, total);
    printf("\nPorcentagem de SP: %.2f", porcentagem);
    porcentagem = calculoPorcentagem(RJ, total);
    printf("\nPorcentagem do RJ: %.2f", porcentagem);
    porcentagem = calculoPorcentagem(MG, total);
    printf("\nPorcentagem de MG: %.2f", porcentagem);
    porcentagem = calculoPorcentagem(ES, total);
    printf("\nPorcentagem de ES: %.2f", porcentagem);
    porcentagem = calculoPorcentagem(Outros, total);
    printf("\nPorcentagem de Outros: %.2f", porcentagem);

    return 0;
}