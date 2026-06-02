// SWITCH CALCULATOR

#include<iostream>
using namespace std;
int main() {
    int a,b;
    char op;
    cout<<"enter a:"<< endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"enter operator to be used:"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<"addition is "<<(a+b)<<endl;
          break;
        case '-': cout<<"subtraction is "<<(a-b)<<endl;
          break;
        case '*': cout<<"multiplication is "<<(a*b)<<endl;
          break;
        case '/': cout<<"division is "<<(a/b)<<endl;
          break;
        default: cout<<"invalid operator";
    }
 return 0;
}