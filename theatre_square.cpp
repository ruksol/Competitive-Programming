#include<iostream>

using namespace std;

int main(){
    unsigned long long int n, m, a;

    cin>>n>>m>>a;

    if(n%a!=0){
        n = (n/a + 1)*a;
    }
    if(m%a!=0){
        m = (m/a + 1)*a;
    }

    cout<<(n*m)/(a*a);

    return 0;
}