//
//  OverAverage.cpp
//  code
//
//  Created by 김도현 on 2023/03/22.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    int c, n, sum, cnt, i, j;
    float avg, ratio;
    int score[1000];
    
    cin>>c;
    for(i=0; i<c; i++)
    {
        sum =0;
        cnt =0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>score[j];
            sum+=score[j];
        }
        avg = (float)sum/n;
        
        for(j=0; j<n; j++)
        {
            if(score[j]>avg)
                cnt++;
        }
        
        ratio = (float)cnt/n*100;
        cout<<fixed<<setprecision(3)<<ratio<<'%'<<endl;
    }
    return 0;
}
