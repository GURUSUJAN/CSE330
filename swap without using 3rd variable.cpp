#include <iostream>
using namespace std;
int main() 
{
    int a=30, b=10;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
}
