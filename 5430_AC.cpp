//
//  5430_AC.cpp
//  code
//
//  Created by 김도현 on 2023/05/10.
//

#include <iostream>
#include <deque>
#include <cstring>
using namespace std;
deque<int> dq;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int T;
    cin>>T;
    
    for(int i=0; i<T; i++)
    {
        int n;
        string p,arr,x;
        cin>>p;
        bool isReverse = false;
        bool isError = false;
        cin>>n;
        cin>>arr;
        
       
        
        for(int j=0; j<arr.length(); j++)
        {
            if(arr[j] == '[')
                continue;
            else if('0' <= arr[j] && arr[j] <= '9')
                x=x+arr[j];
            else
            {
                if(!x.empty())
                {
                    dq.push_back(stoi(x));
                    x.clear();
                }
            }
        }
        
        
        for(int k=0; k<p.length(); k++)
        {
            if(p[k] == 'R')
            {
                isReverse = !isReverse;
            }
            
            else if(p[k] == 'D')
            {
                if(dq.empty())
                {
                    isError = true;
                    break;
                }
                
                if(isReverse)
                    dq.pop_back();
                    
                else
                    dq.pop_front();
            }
        }
        
        if(isError)
            cout<<"error\n";
        
        else
        {
            if(!isReverse)
            {
                cout<<'[';
                while(!dq.empty())
                {
                    cout<<dq.front();
                    dq.pop_front();
                    
                    if(!dq.empty())
                        cout<<", ";
                }
                cout<<"]\n";
            }
            
            else
            {
                cout<<'[';
                while(!dq.empty())
                {
                    cout<<dq.back();
                    dq.pop_back();
                    
                    if(!dq.empty())
                        cout<<", ";
                }
                cout<<"]\n";
            }
        }
    }
    cout<<"\n";
    return 0;
}
