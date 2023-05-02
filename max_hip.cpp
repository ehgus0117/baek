//
//  max_hip.cpp
//  code
//
//  Created by 김도현 on 2023/05/02.
//

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    priority_queue<int> pq;
    int N;
    cin>>N;
    for(int i=0; i<N; i++)
    {
        int x;
        cin>>x;
        if(x == 0)
        {
            if(pq.empty())
                cout<<0<<"\n";
            else
            {
                cout<<pq.top()<<"\n";
                pq.pop();
            }
        }
        else
            pq.push(x);
    }
    return 0;
    
}
