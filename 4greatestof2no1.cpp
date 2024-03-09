
//Find the Largest of the Two Numbers in C
//Method 2 : Using Ternary Operator
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the first no:";
    cin>>a;
    cout<<"enter the second no:";
    cin>>b;
    if(a==b)
        cout<<a<<" "<<b<<"both are equal";
    else{
        temp=a>b ?a:b;
        cout<<temp<<" is greater";
    }
    return 0;
}
