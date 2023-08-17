#include"bits/stdc++.h"
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    bool primes[n];
    for(i = 0;i<=n;i++)
    primes[i] = true;
    primes[0] = false;
    primes[1] = false;

    for(i = 2;i<=n;i++)
    {
        if(primes[i])
        {
            for(j = i*2;j<=n;j+=i)
            {
                primes[j] = false;
            }
        }
    }
    for(i = 0;i<=n;i++)
        if(primes[i])
            cout<<i<<" ";
}
