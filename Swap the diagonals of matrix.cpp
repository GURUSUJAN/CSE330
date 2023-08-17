#include"bits/stdc++.h"
using namespace std;
int main()
{
    int N=5;
    int array[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    for (int i = 0; i < N; ++i)
    if (i != N / 2|| i!=N/2-1)
    swap(array[i][i], array[i][N - i - 1]);
 
    for (int i = 0; i < N; ++i)
    {
    for (int j = 0; j < N; ++j)
            cout<<" "<< array[i][j];
    cout<<endl;
    }
}
