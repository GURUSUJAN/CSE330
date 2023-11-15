#include<bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    if(a<b)
    return true;
    return false;
}
bool cmp1(int a, int b)
{
    if(a>b)
    return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    sort(a, a+n, cmp);
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    sort(a, a+n, cmp1);
    cout<<"\n";
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
    cout<<"\n";
    sort(a, a+n, greater<>());
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
