//Find the Largest of the Two Numbers in C
//Using Classes
#include<iostream>
using namespace std;
class greatest
{
public:
    int calgreatest(int,int);
};
int greatest::calgreatest(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    greatest g;
    int num1,num2,largest;
    cout<<"enter the first no:";
    cin>>num1;
    cout<<"enter the second no:";
    cin>>num2;
    largest=g.calgreatest(num1,num2);
    cout<<"largest:"<<largest;
    return 0;
}
