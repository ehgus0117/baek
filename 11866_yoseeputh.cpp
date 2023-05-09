//
//  11866.cpp
//  code
//
//  Created by 김도현 on 2023/05/09.
//

#include <iostream>
#include <queue>
using namespace std;
queue<int> q;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int N, K;
    cin>>N>>K;
    for(int i=1; i<N+1; i++)
        q.push(i);
    cout<<'<';
    while(!q.empty())
    {
        for(int i=0; i<K-1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        cout<<q.front();
        if(q.size() != 1)
            cout<<", ";
        q.pop();
    }
    cout<<'>';
    return 0;
}
