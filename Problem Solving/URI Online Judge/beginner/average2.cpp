#include<stdio.h>

int main() {

    double a,b,c;
    double A;
    scanf("%lf%lf%lf",&a,&b,&c);


    A=(a*2+b*3+c*5)/(2+3+5);

    printf("MEDIA = %0.1f",A);
    printf("\n");

    return 0;
}
