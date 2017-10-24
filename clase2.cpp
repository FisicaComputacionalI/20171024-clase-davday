//Número naturales
#include <iostream>
using namespace std;

int main()
{
  long N;
  long s=0;
  cout<<"Dame un número natural "<<endl;
  cin >> N;
  for(long i=1; i<=N; i++)
    {
      s=s+i;
    }
  cout<<"La suma es "<<s<<endl;
  return 0;
} 
