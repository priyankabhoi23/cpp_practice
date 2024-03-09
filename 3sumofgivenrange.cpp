//Find the Sum of Numbers in a Given Interval in C++
//Method 1 : Using Brute Force
#include<iostream>
using namespace std;
int main()
{
    int a, b,sum=0;
    cout<<"enter starting range:";
    cin>>a;
    cout<<"enter the ending range";
    cin>>b;
    for(int i=a;i<=b;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}

