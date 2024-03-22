#include <iostream>

int main() {
    int a, b;

//Solicita ao usuario digitar dois numeros
    printf("digite o primeiro numero(0 ou 1): ");
    scanf("%d", &a);
    printf("digite o segundo numero(0 ou 1): ");
    scanf("%d", &b);

//AND
    printf("\nOperador AND (&&):\n");
    printf("%d && %d = %d/n", a, b, a && b);

//OR

printf ("\nOperador OR (||):\n");
printf ("%d ||%d = %d/n", a, b, a || b);

//NOT
printf("\nOperador NOT (!):\n");
printf("!%d = %d\n", a, !a);
printf("!%d = %d\n", b, !b);

return 0;
}
