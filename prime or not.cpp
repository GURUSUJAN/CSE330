#include<iostream>
using namespace std;
bool PrimeNumber(int a, int b=2)
{
  if(a<=2) return(a==2) ? true:false; 
  if(a%b==0) return false; 
  if(b*b>a) return true;
  return PrimeNumber(a, b+1);
}
int main()
{
  int a=56;
  if (PrimeNumber(a))
  cout << "Prime Number";
  else
  cout << "Not a Prime Number";
}
