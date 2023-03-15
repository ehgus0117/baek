//
//  asd.cpp
//  code
//
//  Created by 김도현 on 2023/03/15.
//

#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    cin>>a>>b>>c;
    long long int s = (long long int)(a * b * c);
    int COUNT_NUM[10]={0,0,0,0,0,0,0,0,0,0};
    
    while (s > 0)
    {
        int digit = s % 10;
        COUNT_NUM[digit]++;
        s /= 10;
    }
    
    for(int i=0;i<10; i++)
        cout<<COUNT_NUM[i]<<endl;
    return 0;
}
