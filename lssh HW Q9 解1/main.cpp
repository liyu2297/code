#include <iostream>

using namespace std;

int main()
{
    float x,y,BMI,z,i,y1;

    i=0;

    cout<<"�����]���ء^�G";
    cin>>x;//����
    cout<<"�魫�]����^�G";
    cin>>y;//�魫

    BMI=y/( x*x );

    if(BMI>=18.5)
    {
        z=BMI+1;
    }

    else
    {
        cout<<"��o�`������0��";
        return 0;
    }

    while(BMI<z&&BMI>=18.5)
    {
        z=BMI;

        cout<<"�魫�]����^�G";
        cin>>y;//�魫

        BMI=y/( x*x );

        if(BMI<z&&BMI>18.5)
        {

            i=i+500;

        }

    }
    cout<<"��o�`������"<<i<<"��";



}
