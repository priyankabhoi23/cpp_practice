//Find the Sum of Numbers in a Given Interval in C++
//Method 3 : Using Recursion 1
#include<iostream>
using namespace std;
int getSum(int a,int b){
if(a>b)
    return 0;
return a+getSum(a+1,b);
}
int main()
{
    int a,b,sum=0;
    cout<<"enter the starting range";
    cin>>a;
    cout<<"enter the ending range";
    cin>>b;
    sum=getSum(a,b);
    cout<<sum;
    return 0;
}
