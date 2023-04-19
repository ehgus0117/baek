#include <iostream>
#include <vector>
using namespace std;

vector<bool> isprime(1000001, true);

void eratosthenes(int n)
{
    isprime[0] = isprime[1] = false;
    for(int i=2; i<=n; i++)
    {
        if(isprime[i])
            for(int j=i*2; j<=n; j+=i)
                isprime[j] = false;
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    
    int a, b;
    cin>>a>>b;
    eratosthenes(b);
    
    for(int i=a; i<=b; i++)
        if(isprime[i])
            cout<<i<<'\n';
    return 0;
}
