#include<stdio.h>

int main() {


    int a,b,e,f;
    double c,g;
    double A,h,i;
    scanf("%d%d%lf",&a,&b,&c);
    scanf("%d%d%lf",&e,&f,&g);

    h=b*c;
    i=f*g;
    A=h+i;



    printf("VALOR A PAGAR: R$ %0.2f\n",A);


    return 0;
}
