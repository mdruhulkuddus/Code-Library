#include<bits/stdc++.h>
using namespace std;

int main()
{

    for(int i =1,j=7; i<=9; i+=2,j+=2)
    {
            for(int k=j ;k>=(j-2); k-- )
            {
              cout<<"I="<<i<<" J="<<k<<"\n";
            }


    }
    return 0;

}

/* another solution of easy

 int j = 7;
    for(int i = 1; i <= 9; i++){
            cout << "I=" << i << " " << "J=" << j << "n";
            cout << "I=" << i << " " << "J=" << j-1 << "n";
            cout << "I=" << i << " " << "J=" << j-2 << "n";
            i++;
            j+=2;
    }

 */



