//calculate the avg marks

#include<iostream>
using namespace std;

int main() {
    int eng;
    int math;
    int sci;

    cout<<"eng marks are:"<<endl;
    cin>>eng;
    cout<<"math marks are:"<<endl;
    cin>>math;
    cout<<"sci marks are:"<<endl;
    cin>>sci;

    //avg marks

    int avg=(eng+math+sci)/3;
    cout<<"avg marks are:"<<avg<<endl;

    return 0;

}