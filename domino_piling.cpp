#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter board height: ";
    cin>>a;
    cout<<"Enter board width: ";
    cin>>b;
    cout<<"The number of maximum doiminos that fit are: "<<(a*b)/2;
}