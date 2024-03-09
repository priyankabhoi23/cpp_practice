//Find the Largest of the Two Numbers in C
//Using inbuilt max() Function
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the first number";
    cin>>a;
    cout<<"enter the second number";
    cin>>b;
    if(a==b)
    {
        cout<<a<<" "<<b<<" Both are equal";

    }
    else
        cout<<max(a,b)<<"is greater";
    return 0;

}
