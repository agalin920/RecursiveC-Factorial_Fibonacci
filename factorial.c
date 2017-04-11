//Author: Andres Galindo


#include <stdio.h>


int multiplicarNumeros(int n);

int main()
{
    int numero;
    printf("Introduzca un numero: ");
    scanf("%d", &numero);
    printf("Factorial de %d = %d", numero, multiplicarNumeros(numero));
    return 0;
}

int multiplicarNumeros(int n)
{
    if (n >= 1)
        return n*multiplicarNumeros(n-1);
    else
        return 1;
}
