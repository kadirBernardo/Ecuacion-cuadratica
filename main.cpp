#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;

    printf("Valor de a: ");
    scanf("%f", &a);

    printf("Valor de b: ");
    scanf("%f", &b);

    printf("Valor de c: ");
    scanf("%f", &c);

    x1 = (- b + sqrt(pow(b,2) - 4*a*c))/(2*a);
    x2 = (- b - sqrt(pow(b,2) - 4*a*c))/(2*a);

    if(b==0 && c==0){
        printf("El valor de x = 0");
    }else{
        printf("El valor de x1 = %f\n", x1);
        printf("El valor de x2 = %f", x2);
    }
    return 0;
}
