//Author: Andres Galindo

#include <stdio.h>

int main()
{
    int tmp1, tmp2, tmp3, i, n;

    printf("Introduzca la cantidad de terminos deseados de la serie de Fibonacci: ");
    scanf("%d", &n);

    tmp1 = 0;
    tmp2 = 1;
    tmp3 = 0;

    for(i=1; i<=n; i++)
    {
        printf("%d, ", tmp3);
        tmp1=tmp2;
        tmp2=tmp3;
        tmp3=tmp1+tmp2;
    }
    return 0;
}
