#include <iostream>

using namespace std;


int main()
{
    int i_Result = 3,i_Var = 1000;

    i_Var -= i_Result;
    std::cout<<"�g�L�ƦX��k = "<<i_Var<<"\n";
    i_Var *= i_Result;
    std::cout<<"�A�g�L�ƦX���k = "<<i_Var<<"\n";
    i_Var /= i_Result;
    std::cout<<"�A�g�L�ƦX���k = "<<i_Var<<"\n";
    i_Var %= i_Result;
    std::cout<<"�A�g�L�ƦX���l�� = "<<i_Var<<"\n";

    /*(++i_Result) +=i_Result + (i_Result++);
    cout<<i_Result;*/

}

