//
//  card2.cpp
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
    
    int N;
    cin>>N;
    for(int i=1; i<N+1; i++)
        q.push(i);
    q.pop();
    while(q.size() > 1)
    {
        q.push(q.front());
        q.pop();
        q.pop();
    }
    cout<<q.back()<<"\n";
    return 0;
}
