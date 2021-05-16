#include <iostream>

using namespace std;

int main()
{
    int a1, a2, i, b1, b2;

    cin >> a1 >> a2 ;
    b1=a1;
    b2=a2;
    while( a1!=0 and a2!=0 )
        {
            if( a1 >= a2 )
            {
                a1 = a1%a2;
            }
            else if( a2 > a1 )
            {
                a2 = a2%a1;
            }
        }

        if( a1 >= a2 )
        {
            cout << a1<<" " ;
            i=a1*(b1/a1)*(b2/a1);
        }
        else
        {
            cout << a2 <<" ";
            i=a2*(b1/a2)*(b2/a2);
        }//最大公因數

        cout<<i;





}
