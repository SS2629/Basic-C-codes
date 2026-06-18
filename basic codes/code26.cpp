// reverse of a number

#include<iostream>
using namespace std;
int main() {
    int n= 10829;

    while (n>0) {
        int lastdig= n%10;
        cout<< lastdig;
        n/=10;

    }
    return 0;
}