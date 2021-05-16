#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int  i ,Sec,r;
    float a[6] ;

    for(i=0;i<=5;i++)
    {
        cin>>r;
        cin>>a[r-1];
    }
    cin>>r;
    r=r-1;
    cout<<fixed<<setprecision(1)<<a[r];
}
