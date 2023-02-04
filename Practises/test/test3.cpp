#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout <<"\n" << "What type of calculation you want CGPA or SGPA : " ;
    string choice;
    cin >> choice;
    if(choice[0] == 's' || choice[0] == 'S')
    {
        int Total_courses, TotalCredit = 0, serial = 1;
        double SGPA, sumOf_credit_Grade = 0;
        cout <<"\n" << "How many courses you taken in this semester : ";
        cin >> Total_courses;
        while(Total_courses--)
        {
            int credit; double grade ;
            cout <<  "\n" <<"Credit of " << serial << " NO course : ";
            cin >> credit;
            cout << "\n" << "Grade of " << serial << " NO course : ";
            cin >> grade;
            sumOf_credit_Grade += credit * grade;
            TotalCredit += credit;
            serial++;
        }
        SGPA =  sumOf_credit_Grade / TotalCredit * 1.0;
        cout << "-------------------------------------------\n";
        cout <<  "\t" << "Total Credit : "  << TotalCredit;
        cout << "\n-------------------------------------------\n";
        cout << "-------------------------------------------\n";
        cout <<  "\t" <<setprecision(2) << fixed << "Your SGPA : "  << SGPA;
        cout << "\n-------------------------------------------\n";
    }
    else
    {
        int Total_sem, serial = 1;
        double CGPA, TotalCredit = 0, sumOf_credit_Grade = 0;
        cout <<"\n" << "How many semester you have completed : ";
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

    return 0;
}
