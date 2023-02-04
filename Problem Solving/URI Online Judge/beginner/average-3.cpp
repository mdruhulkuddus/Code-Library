//one if is true ,program control cannot go else/else if! if not then go
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,more;
    cin>>a>>b>>c>>d;
    double w1=2,w2=3,w3=4,w4=1;

    double w_mean=(a*w1+b*w2+c*w3+d*w4)/(w1+w2+w3+w4);
    cout<<setprecision(1)<<fixed<<"Media: " <<w_mean<<endl;

    if(w_mean>=7.00)
    {
        cout<<"Aluno aprovado." <<endl;
    }
    else if (w_mean>=5.00)
    {
        cout<<"Aluno em exame." <<endl;
        cin>>more;
        cout<<"Nota do exame: "<<more<<endl;
        double f_mean=(w_mean+more)/2;
        if(f_mean>=5.0) cout<<"Aluno aprovado."<<endl;
        else cout<<"Aluno reprovado."<<endl;
        cout<<"Media final: "<<f_mean<<endl;
    }
    else cout<<"Aluno reprovado."<<endl;

//
//    if(w_mean==7.0 || w_mean>7.00 )
//    else if(w_mean<5.0 ) cout<<"Aluno reprovado." <<endl;
//    else if(w_mean>=5.0 && w_mean<=6.9 ) cout<<"Aluno em exame." <<endl;
//
//    double more;
//    cin>>more;
//    if(more)
//    {
//        cout<<"Nota do exame: "<<more<<endl;
//        double f_mean=(w_mean+more)/2;
//        if(f_mean>=5.0) cout<<"Aluno aprovado."<<endl;
//        else cout<<"Aluno reprovado."<<endl;
//        cout<<"Media final: "<<f_mean<<endl;
//    }
//main();

    return 0;
}
