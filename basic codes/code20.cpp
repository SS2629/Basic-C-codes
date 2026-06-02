//sum of n natural numbers by loop

#include<iostream>
using namespace std;
int main() {
    int n, sum;
    cout<<"enter the value of n:";
    cin>>n;
    for (int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"sum="<<sum<<endl;
        return 0;
    }
