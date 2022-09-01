#include<iostream>

using namespace std;

int domino_piling(int a, int b){
    return a*b/2;
}

int main(){
    int a, b;
    cout<<"Enter two numbers(board sizes): ";
    cin>>a>>b;
    cout<<"The number of maximum doiminos that fit are: "<<domino_piling(a,b);
}