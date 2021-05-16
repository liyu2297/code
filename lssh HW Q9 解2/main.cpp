#include <iostream>
using namespace std;
int main()
{

    float h,w,k,sum=0,BMI;
    cout<<"身高（公尺）：";
    cin>>h;//身高
    cout<<"體重（公斤）：";
    cin>>w;//體重
    BMI=w/( h*h );
    do{
        if(BMI>=18.5)
        {
            k=w;
            cout<<"體重（公斤）：";
            cin>>w;
            BMI=k/( h*h );
            if(BMI>=18.5&&k>w)
            {
                sum=sum+500;
            }
        }
    }while(BMI>=18.5&&k>w);
    cout<<"獲得總獎金為"<<sum<<"元";
}
