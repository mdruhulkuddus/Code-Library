#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n;
    char ch[120];

    scanf("%LE",&n); //long double specifier( scientific notation float)
    sprintf(ch, "%LE", n); //stored n in ch
    if(ch[0] != '-') cout<<"+";
    printf("%.4LE\n",n);
    return 0;
}

