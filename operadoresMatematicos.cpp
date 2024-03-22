#include <iostream> 

int main () {
    int num1 = 10;
    int num2 = 5;

    int soma = num1 + num2; 
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    int resto = num1 % num2;

    printf("Soma: %d + %d = %d\n", num1, num2, soma);
    printf("Subtracao: %d - %d = %d\n", num1, num2, subtracao);
    printf("Multiplicacao: %d * %d = %d\n", num1, num2, multiplicacao);
    printf("Divisão: %d / %d = %d (quociente), Resto %d\n", num1, num2, divisao, resto);
    return 0;
}