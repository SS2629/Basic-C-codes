//LOGICAL OPERATORS

#include<iostream>
using namespace std;

int main() {
    int a=4;
    int b=6;

    cout<<(a<b) && (b>a);
    cout<<(a<b) || (b<a);
    cout<<(a!=b);
    cin>>a>>b;

    return 0;
}