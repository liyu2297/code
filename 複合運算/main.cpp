#include <iostream>

using namespace std;


int main()
{
    int i_Result = 3,i_Var = 1000;

    i_Var -= i_Result;
    std::cout<<"經過複合減法 = "<<i_Var<<"\n";
    i_Var *= i_Result;
    std::cout<<"再經過複合乘法 = "<<i_Var<<"\n";
    i_Var /= i_Result;
    std::cout<<"再經過複合除法 = "<<i_Var<<"\n";
    i_Var %= i_Result;
    std::cout<<"再經過複合取餘數 = "<<i_Var<<"\n";

    /*(++i_Result) +=i_Result + (i_Result++);
    cout<<i_Result;*/

}

