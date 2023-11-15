//Prime numbers sum

#include <iostream>
using namespace std;
int a[100000];
int main() 
{
    int sum = 0;
    for(int i=0; i<100000; i++)
        a[i] = i;
    a[0] = 0;
    a[1] = 0;
    for(int i=2; i<100000; i++)
    {
        if(a[i] == i)
        {
            for(int j=i*2; j<100000; j+=i)
                a[j] = 0;
        }
    }
    for(int i=2; i<100000; i++)
    {
        sum += a[i];
        a[i] = sum;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }
}
