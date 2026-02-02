#include <iostream>
using namespace std;
int main(){
    int n1,n2,gcd,i;
    cin>>n1>>n2;
    int max=0;
    if(n1>n2){
        max=n1;
    }
    else
    max = n2;
    for(i=1;i<max;i++){
        if(n2%i==0&&n1%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}