#include<stdio.h>

int main() {


    char ch;
    double a,b;
    double A,total;
    scanf("%s%lf%lf",&ch,&a,&b);


    A=b*.15; ///(b*15)/100
    total=A+a;

    printf("TOTAL = R$ %0.2f\n",total);


    return 0;
}
