#include <iostream>
using namespace std;
int main()
{

    float h,w,k,sum=0,BMI;
    cout<<"�����]���ء^�G";
    cin>>h;//����
    cout<<"�魫�]����^�G";
    cin>>w;//�魫
    BMI=w/( h*h );
    do{
        if(BMI>=18.5)
        {
            k=w;
            cout<<"�魫�]����^�G";
            cin>>w;
            BMI=k/( h*h );
            if(BMI>=18.5&&k>w)
            {
                sum=sum+500;
            }
        }
    }while(BMI>=18.5&&k>w);
    cout<<"��o�`������"<<sum<<"��";
}
