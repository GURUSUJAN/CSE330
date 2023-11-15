#include<bits/stdc++.h>
using namespace std;
int countOccurrences(string S1, string S2, int i, int j) 
{
    if (i<0 || j<0) 
        return 0;
    if (S1[i] == S2[j])
    {
        int x= countOccurrences(S1, S2, i-1, j-1);
        return 1+x;
    }
    int a=countOccurrences(S1, S2, i, j-1);
    int b=countOccurrences(S1, S2, i-1, j);
    return max(a,b);
}
int main()
{
    string S1 = "axyt";
    string S2 = "ayzx";
    int i=S1.length()-1, j=S2.length()-1;
    int res = countOccurrences(S1, S2, i, j);
    cout<<res;
}

