//break statement.

#include<iostream>
using namespace std;
int main() {
    int i= 1;
    while (i<=10) {
        cout<< i <<endl;
        if(i == 6) {
            break;
        }
        i++;
    }
    cout<<"out of loop now"<<endl;
    return 0;
}