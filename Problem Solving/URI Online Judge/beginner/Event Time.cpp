#include<bits/stdc++.h>
using namespace std;

int main()
{
//    string d;
//    int s_day, e_day;
//    //istringstream stream1;
//    string str="20 : 5 : 30";
//   // stringstream ss(string2);
// //stream1.str(string2);
//// stringstream ss(string2);
//// while(  ss>> d )
//// {
////
////     cout << "num: " << d << endl;
//// }
//
//stringstream ss(str);
//    string temp;
//
//    // Making the string empty
//   int sum=0;
//
//    // Running loop till end of stream
//    // and getting every word
//    while (getline(ss, temp, ':')) {
//        // Concatenating in the string
//        // to be returned
//        //cout<<temp <<endl;
//        sum+=stoi(temp);
//    }
//   cout<<sum;
//
// string str3 = "geek 31337 ";
//
//
//    int myint3 = stoi(str3);
//
//    cout << myint3 <<'\n';

   string dateLine1,timeLine1,temp; int date1;
   string dateLine2,timeLine2; int date2;
   //cin>>dateLine1>>date1;

   //int date=stoi(dateLine2);
   //cout<<date;
   getline(cin,timeLine1);
   stringstream ss(timeLine1);
int i=0,sum[i];
       while (getline(ss, temp, ':')) {
        // Concatenating in the string
        // to be returned
        //cout<<temp <<endl;
        sum[i++]=stoi(temp);
    }
//    int arrSize = sizeof(sum)/sizeof(sum[0]);
    cout<<sum[0];
    return 0;
}

