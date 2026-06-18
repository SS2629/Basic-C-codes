// WAP to print all numbers by the user except the multiples of 10

#include<iostream>
using namespace std;
int main() {
    int n;

    do {
      cout<<"enter the no:";
      cin>>n;
      if (n % 10 == 0) {
        continue;
      }
      cout<<" you entered:"<<n<<endl;
    } while (true);
    return 0;
}