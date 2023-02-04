#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    list<int>li;
    list<int>::iterator cursor=li.end();
    cin>>n;
    while(n--)
    {
        int x, element;
        cin>>x;
        if(x==0)
        {

            cin>>element;
          cursor= li.insert(cursor, element);

        }
        else if(x==1)
        {
            cin>>element;
            advance(cursor, element);

        }
        else
        {
       cursor= li.erase(cursor);

        }

    }

    list<int>::iterator it=li.begin();

    for(it=li.begin(); it != li.end(); it++)
    {
        cout<< *it <<"\n";
    }
    return 0;
}



