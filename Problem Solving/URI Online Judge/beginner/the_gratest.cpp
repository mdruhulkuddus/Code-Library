#include<bits/stdc++.h>
using namespace std;
int main(){
        int a,b,c,MaiorAB,s,MAX;
        cin>>a>>b>>c;
        MaiorAB=(a+b+abs(a-b))/2;  ///absolute value
        MAX=(MaiorAB+c+abs(MaiorAB-c))/2;
        cout<< MAX<<" eh o maior"<<endl;

 return 0;

}

/*

#include <stdio.h>

    int main()
    {
         int a, b, c, tmp;
         scanf("%d %d %d", &a, &b, &c);
         tmp = a;
         if(a < b || a < c){
             if(b < c){
             tmp = c;
             }
         else{
               tmp = b;
            }
        }
        printf("%d eh o maior\n", tmp);
        return 0;
    }
*/
