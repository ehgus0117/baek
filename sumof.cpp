    #include <iostream>
    #include <cstdlib>
    using namespace std;

    int main(void)
    {
        int n, sum = 0;
        string a;
        cin>>n;
        cin>>a;
        for(int i=0; i<n; i++)
        {
            sum+=a[i]-'0';
        }
        cout<<sum<<endl;
        return 0;
    }

