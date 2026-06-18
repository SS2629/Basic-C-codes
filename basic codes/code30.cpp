// break statement for a multiple of 10

#include<iostream>
using namespace std;
int main() {
    int n;
    do {
        cout<<"enter the number:"<<endl;
        cin>>n;
        if (n % 10 == 0) {
            break;
         }
    cout<<"you entered:"<< n << endl;
     } while(true);
    return 0;
}