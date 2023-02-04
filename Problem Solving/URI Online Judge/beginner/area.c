#include<stdio.h>
#include<math.h>
int main() {


    double a,b,c;
    double pi=3.14159;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf%lf%lf",&a,&b,&c);

    TRIANGULO=.5*a*c; /// or 1.0/2*a*c;/ float(1)/2*a*c; /½ * base * hight
    CIRCULO=pi*c*c;   ///pi*r2
    TRAPEZIO=.5*c*(a+b); ///½ * (a+b) *h
    QUADRADO=b*b;    ///b2
    RETANGULO=a*b;        ///A = L * W

    printf("TRIANGULO: %0.3lf\n",TRIANGULO);
    printf("CIRCULO: %0.3lf\n",CIRCULO);
    printf("TRAPEZIO: %0.3lf\n",TRAPEZIO);
    printf("QUADRADO: %0.3lf\n",QUADRADO);
    printf("RETANGULO: %0.3lf\n",RETANGULO);



    return 0;
}

