// ELIF STATEMENT

#include<iostream>
using namespace std;

int main(){
  int marks;
  cout<<"enter marks:"<<endl;
  cin>>marks;

  if(marks>=90){
    cout<<"A grade"<<endl;
  }
  else if(marks>=70){
    cout<<"B grade"<<endl;
  }
  else{
    cout<<"C grade"<<endl;
  }
  return 0;
}


