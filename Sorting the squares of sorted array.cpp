#include"bits/stdc++.h"
using namespace std;
int main()
{
    vector<int>vec,v;
    int n;
    while(cin>>n)
    {
        vec.push_back(n);
    }
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]<0)
        vec[i]*=-1;
    }
    int first=0,last=vec.size()-1;
    while(first<=last)
    {
        if(vec[first]>=vec[last])
        {v.push_back(vec[first]*vec[first]);
        first++;
        }
        else if(vec[last]>=vec[first])
        {v.push_back(vec[last]*vec[last]);
        last--;
        }
    }
    for(auto i:vec)
    cout<<i<<" ";
    cout<<endl;
    for(auto i:v)
    cout<<i<<" ";
}
