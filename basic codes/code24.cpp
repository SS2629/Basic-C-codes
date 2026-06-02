// sum of digits of a number

#include<iostream>
using namespace std;
int main() {
    int n= 10289;
    int digisum= 0;
    
    while (n>0) {
        int lastDig= n%10;
        digisum+=lastDig;
        n= n/10;
    }
    cout<<"sum="<<digisum<<endl;
    return 0;
}