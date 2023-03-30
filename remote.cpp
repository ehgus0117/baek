//
//  qqqq.cpp
//  code
//
//  Created by 김도현 on 2023/03/30.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
using namespace std;

vector<int> broken;
int n, m;

int count(int num)//자리수 구하기
{
    if(num == 0)
        return 1;
    return log10(num) + 1;
}

bool check(int num)//고장난 버튼이 있는지 확인
{
    if(num ==0)
    {
        for(int i=0; i<broken.size(); i++)
            if(broken[i] == 0)
                return false;
        return true;
    }
    while(num)
    {
        int d = num % 10;
        num /= 10;
        for(int i=0; i<broken.size(); i++)
        {
            if(broken[i] == d)
                return false;
        }
    }
    return true;
}

int main(void)
{
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int b;
        cin>>b;
        broken.push_back(b);
    }
    
    int ans = abs(n-100);
    for(int i=0; i<1000000; i++)
    {
        if(check(i))
        {
            int cnt = abs(n-i) + count(i);
            ans = min(ans, cnt);
        }
    }
    
    cout<<ans<<'\n';
    return 0;
    
}

