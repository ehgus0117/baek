//
//  DSLR.cpp
//  code
//
//  Created by 김도현 on 2023/04/19.
//
#include <iostream>
#include <queue>
using namespace std;


int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int N, x;
    string s;
    queue<int> q;
    
    cin>>N;
    
    for(int i=0; i<N; i++)
    {
        cin>>s;
        if(s == "push")
        {
            cin>>x;
            q.push(x);
        }
        else if(s == "pop")
        {
            if(!q.empty())
            {
                cout<<q.front()<<'\n';
                q.pop();
            }
            else
                cout<< -1 << '\n';
        }
        else if(s == "size")
        {
            cout<<q.size()<<'\n';
        }
        else if(s== "empty")
        {
            cout<<q.empty()<<'\n';
        }
        else if(s=="front")
        {
            if(!q.empty())
                cout<<q.front()<<'\n';
            else
                cout<<-1<<'\n';
        }
        else
        {
            if(!q.empty())
                cout<<q.back()<<'\n';
            else
                cout<<-1<<'\n';
        }
    }
}
