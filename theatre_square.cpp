#include<iostream>

using namespace std;

int main(){
    int n, m, a;

    cin>>n>>m>>a;

    int x = n*m;
    int y = a*a;

    if(x%y==0){
        cout<<x/y;
    }
    else if(n==a && m!=a){
        cout<<(x/y)+1;
    }
    else if(m==a && n!=a){
        cout<<(x/y)+1;
    }
    else{
        n = (n/a + 1)*a;
        m = (m/a + 1)*a;
        x = n*m;
        y = a*a;
        cout<<x/y;
    }
}