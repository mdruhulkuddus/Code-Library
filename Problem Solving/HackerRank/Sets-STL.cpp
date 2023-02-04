#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    set<int>s;
    cin>>n;
    while(n--)
    {
        int x, element;
        cin>>x>>element;
        if(x==1)
        {
            s.insert(element);
        }
        else if(x==2)
        {
            if(s.count(element))
            {
                s.erase(element);
            }
        }
        else
        {
            if(s.count(element)) cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";


        }

    }

    return 0;
}

