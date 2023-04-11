//
//  #of!0.cpp
//  code
//
//  Created by 김도현 on 2023/04/11.
//

#include <iostream>
using namespace std;

int main(void)
{
    int a;
    int sum=0;
    cin>>a;
    
    for(int i=1; i<= a; i++)
    {
        int save = i;
        int cnt = 0;
        while(save % 5 == 0)
        {
            save /= 5;
            cnt++;
        }
        if(cnt != 0)
            sum += cnt;
    }
    cout<<sum;
    return 0;
}
