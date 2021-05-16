#include <iostream>

using namespace std;

int main()
{
    float x,y,BMI,z,i,y1;

    i=0;

    cout<<"身高（公尺）：";
    cin>>x;//身高
    cout<<"體重（公斤）：";
    cin>>y;//體重

    BMI=y/( x*x );

    if(BMI>=18.5)
    {
        z=BMI+1;
    }

    else
    {
        cout<<"獲得總獎金為0元";
        return 0;
    }

    while(BMI<z&&BMI>=18.5)
    {
        z=BMI;

        cout<<"體重（公斤）：";
        cin>>y;//體重

        BMI=y/( x*x );

        if(BMI<z&&BMI>18.5)
        {

            i=i+500;

        }

    }
    cout<<"獲得總獎金為"<<i<<"元";



}
