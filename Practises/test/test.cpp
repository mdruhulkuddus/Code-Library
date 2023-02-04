#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Total_sem, serial = 1;
    double CGPA, TotalCredit = 0, sumOf_credit_Grade = 0;
    cout << "How many semester you have completed : ";
    cin >> Total_sem;
    while(Total_sem--)
    {
        int credits;
        double grade;
        cout <<  "\n" <<"Total credit of " << serial << " NO semester : ";
        cin >> credits;
        cout <<  "\n" <<"Total grade of " << serial << " NO semester : ";
        cin >> grade;
        sumOf_credit_Grade += credits * grade;
        TotalCredit += credits;
        serial++;
    }
    CGPA =  sumOf_credit_Grade / TotalCredit;
    cout << "-------------------------------------------\n";
    cout <<  "\t" << "Total Credit : "  << TotalCredit;
    cout << "\n-------------------------------------------\n";
    cout << "-------------------------------------------\n";
    cout <<  "\t" <<setprecision(2) << fixed << "Your CGPA : "  << CGPA;
    cout << "\n-------------------------------------------\n";
}
