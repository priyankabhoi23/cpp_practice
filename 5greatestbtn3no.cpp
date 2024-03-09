//Find the Greatest of the Three Numbers in C
//Method 1: Using if-else Statements
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter the three no:";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    {
        cout<<num1<<"is greater";
    }
    else if(num2>num1 && num2>num3)
    {
        cout<<num2<<" is greater";
    }
    else
    {
        cout<<num3<<" is greater";
    }

    return 0;


}
