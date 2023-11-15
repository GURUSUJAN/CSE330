#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>1)
    {
        if(n==2)
        cout<<"Prime"<<endl;
        else
        {
            for(int i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    cout<<"Not the prime"<<endl;
                    break;  
                }
                else 
                {
                    cout<<"Prime"<<endl;
                    break;
                }
            }
        }
    }
    else if(n<=1)
    cout<<"Invalid number"<<endl;
}
