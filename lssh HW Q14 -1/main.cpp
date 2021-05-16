#include <iostream>

using namespace std;

int main()
{
    int N , i , O , T,a ;
    T=0;
   cin>> N;
   for (i = N ; i >= 2 ; i-- ){
        O = N / i ;
        if( N % i ==0 ){
            a=O;
            cout<< O<<" ";
            T =T+a;

        }
   }
    cout<<endl;//¦]¼Æ

    if(T==N){
    cout<<"Perfect";
   }

   else if(T< N){
    cout<< "Deficient" ;
   }

   else if(T>N){
    cout<<"Abundant";
   }

}
