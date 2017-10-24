//David Pacheco 24-10-17
#include <iostream>
using namespace std;

int main ()
{

int N=12;
 int flag=0;
 int div=0;
cout <<"Dame un número" << endl;
cin >> N;
 for(int i=2; i<N; i++)
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
