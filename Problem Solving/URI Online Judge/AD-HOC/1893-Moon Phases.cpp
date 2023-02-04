#include <iostream>

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    if( 3 <= b && b <= 96 && b > a ) printf( "crescente\n" );
    else if( 3 <= b && b <= 96 && b < a ) printf( "minguante\n" );
    else if( 0 <= b && b <= 2 ) printf( "nova\n" );
    else if( 97 <= b && b <= 100 ) printf( "cheia\n" );

    return 0;
}
