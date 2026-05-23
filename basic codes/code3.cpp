// OPERATORS

#include<iostream>
using namespace std;

int main() {
// input variables

    int a=3;
    int b=4;

//calculation
    int sum=a+b;
    int prod=a*b;
    int div=a/b;
    int sub=a-b;
    int mod=a%b;
    a++;
    b--;

    cout<<"sum="<<sum<<endl;
    cout<<"product="<<prod<<endl;
    cout<<"divison="<<div<<endl;
    cout<<"subtraction="<<sub<<endl;
    cout<<"mod="<<mod<<endl;
    cout<<"a="<<a++<<endl;
    cout<<"b="<<b--<<endl;
    cout<<(a<b)<<endl;
    cout<<(a!=b)<<endl;

    return 0;
}