#include <iostream>

using namespace std;

int main()
{
    int i_Num = -100;
    int* intptr_Num;
    intptr_Num = &i_Num;

    cout<<&i_Num<<"\n";
    cout<<intptr_Num<<"\n";
    cout<<&intptr_Num<<"\n";
    cout<<*intptr_Num<<"\n";
}
