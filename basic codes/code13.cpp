// ELIF largest number

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"enter c:"<<endl;
    cin>>c;

    if(a>=b && a>=c){
        cout<<"a is the largest"<<endl;
    }
    else if(b>=c && b>=a){
        cout<<"b is the largest"<<endl;
    }
    else{
        cout<<"c is the largest"<<endl;
    }
    return 0;
}