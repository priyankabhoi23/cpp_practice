//Find the Sum of Numbers in a Given Interval in C++
//Method 2 : Using the Formula
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum=0;
    cout<<"enter the starting rang";
    cin>>a;
    cout<<"enter the ending range";
    cin>>b;
    sum=(b*(b+1)/2)-(a*(a+1)/2)+a;
    cout<<sum;
    return 0;

}
