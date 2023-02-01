#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int n)
{
    for(int i=2; i<sqrt(n)+1; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int a, b;
    cin>>a>>b;
    while(a<b+1)
    {
        if(isprime(a) == true)
            cout<<a<<endl; a++;
    }
    return 0;
}
