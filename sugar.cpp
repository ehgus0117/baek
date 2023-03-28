//
//  sugar.cpp
//  code
//
//  Created by 김도현 on 2023/03/28.
//

#include <iostream>
using namespace std;

int main(void)
{
    int wheight;
    int num = 0;
    cin>>wheight;
    
    while(wheight>0)
    {
        if(wheight%5 == 0)
        {
            num += wheight/5;
            break;
        }
        wheight -= 3;
        num++;
    }
    
    if(wheight < 0)
        cout<<"-1"<<endl;
    else
        cout<<num<<endl;
    return 0;
}

