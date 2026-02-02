#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    while(n2!=0){
        int r=n1%n2;
        n1=n2;
        n2=r;


    }
    cout<<n1;
    return 0;
}