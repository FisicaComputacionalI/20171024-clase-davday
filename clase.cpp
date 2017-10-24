//David Pacheco 24-10-17 número primos
#include <iostream>
using namespace std;

int main ()
{

long  N=12;
 long flag=0;
 long div=0;
cout <<"Dame un número" << endl;
cin >> N;
 for(long i=2; i<N; i++)
   {
     if(N%i ==0)
       {
	 flag=1;
	 div=i;
	 break;
       }
    }
 if(flag==1){
   cout<<"Tu número no  es primo"<<endl;
   cout<<"Porqué se divide entre "<<div<<endl;
 }
 else
   cout<<"Tu número  es primo"<<endl;
 return 0;
}
