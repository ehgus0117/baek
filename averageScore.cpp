#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    double s[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int max = s[0];
    for(int j=1; j<n; j++)
    {
        if(max<s[j])
            max = s[j];
    }
    for(int i=0;i<n;i++)
    {
        s[i] = s[i]/max * 100;
    }

    double sum=0;
    for(int i=0; i<n; i++)
    {
        sum += s[i];
    }
    cout<<(double)sum / n<<endl;
    return 0;
}
