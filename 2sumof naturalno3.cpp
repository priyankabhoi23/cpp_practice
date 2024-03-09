#include<iostream>
using namespace std;
int getSum(int sum,int n){
if(n==0)
    return sum;
return n+getSum(sum,n-1);
}
int main(){

int n,sum=0;
cout<<"enter the no:";
cin>>n;
cout<<getSum(sum,n);
return 0;
}
