#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=2; i<=n; i++)
    {
        if(a[i]==0)
        {
            for(int j=2*i; j<=n; j+=i)
            a[j]=1;
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(a[i]==0 && n%i==0)
        {
            while(n%i==0)
            {        
                cout<<i<<" ";
                n/=i;
            }
        }
    }
}
