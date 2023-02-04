#include<bits/stdc++.h>
using namespace std;

int main()
{
   
    int n,q;
    vector<int>v[1000]; // declare vector array
     cin>>n>>q;
   //  v.resize(n);
    while(q--)
    {
        int cmd,idx, val ;
        cin>>cmd>>idx;
        if(cmd==0)
        {
            cin>>val;
            v[idx].push_back(val);
        }
        else if(cmd==1)
        {
            // cout << v[idx].size()<<' ';
            	for (int i = 0; i < v[idx].size(); i++)
                    {
                        if (i != 0)cout << " ";
                        cout << v[idx][i];
                    }
//            for(int elemt : v[idx])
//            {
//                if(elemt[0]) cout<<elemt<<" ";
//                else cout<<" "<<elemt;
//
//            }
            cout<<"\n";


        }
        else if(cmd==2)
        {

            v[idx].clear();
            //if(!v[idx].empty()) v[idx].clear();

        }

    }

    return 0;
}
