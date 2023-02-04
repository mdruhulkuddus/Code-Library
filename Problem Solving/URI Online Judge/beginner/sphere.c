#include<stdio.h>
#include<math.h>
int main() {


    int r;
    double pi=3.14159;
    double VOLUME;
    scanf("%d",&r);


    VOLUME =(4*pi*pow(r,3))/3;

    printf("VOLUME = %0.3lf\n",VOLUME);

///printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(a, 3)) / 3);
///ek line e ses

    return 0;
}

