// BUILD A CALCULATOR

#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"enter operator:"<<endl;
    cin>>op;

    if(op == '+'){
        cout<<"addition is "<<(a+b)<<endl;
    }
    else if(op == '-'){
        cout<<"subtraction is "<<(a-b)<<endl;
    }
    else if(op== '*'){
        cout<<"multiplication is"<<(a*b)<<endl;
    }
    else {
        cout<<"division is "<<(a/b)<<endl;
    }
    return 0;
}