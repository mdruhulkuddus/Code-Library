#include<bits/stdc++.h>

int main()
{

    double x1,x2,y1,y2,Distance ;

    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

    Distance= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("%0.4lf\n",Distance);
    return 0;
}
