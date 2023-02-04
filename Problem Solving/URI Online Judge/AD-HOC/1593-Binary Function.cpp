#include <bits/stdc++.h>
using namespace std;

// A function to perform division of large numbers
string longDivision(string number, int divisor)
{
    // As result can be very large store it in string
    string ans;

    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while (number.size() > idx)
    {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';

        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";

    // else return ans
    return ans;
}

// Function to compute num (mod a)
int mod(string num, int a)
{
    // Initialize result
    int res = 0;

    // One by one process all digits of 'num'
    for (int i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;

    return res;
}

// Driver program to test longDivison()
int main()
{
    //string number = "123456789123456789123456789";
    int t;
    cin>>t;
    while(t--)
    {

        string number;
        cin>>number;
        int divisor = 2;
        int cnt=0;
        while(1)
        {
            int moduls = mod(number, 2);
            if(moduls==1) cnt++;
            //cout <<moduls <<"\n";

            string divNum = longDivision(number, divisor);
            number=divNum;
            //cout <<divNum <<"\n";
            if(divNum == "0")
            {
                cout <<cnt <<"\n";
                break;
            }
            else longDivision(number, divisor);

        }
    }
    return 0;
}



/**
int t;
    cin>>t;
    while(t--)
    {
        ll n,cnt=0;
        cin>>n;

        while(n != 0)
        {
            ll mod =(ll) n%2;
            if(mod==1) cnt++;
            n=(ll)n/2;
        }
        cout<<cnt<<"\n";
    }

**/
