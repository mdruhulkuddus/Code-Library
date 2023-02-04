#include<iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
     
     int i,sizel;
     cout << "\nEnter the size of array: ";
     cin >> sizel;
     
     int arr[sizel];
     cout << "\nEnter the element of array: ";
     
     for(i=0;i<sizel;i++)
     {
        cin >> arr[i];
     }
}