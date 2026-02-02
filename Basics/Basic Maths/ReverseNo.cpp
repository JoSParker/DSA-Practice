#include <iostream>
using namespace std;
int main(){
    int n,i,rev=0,lastdigit;
    cin>>n;
    while(n){
        lastdigit=n%10; 
        n=n/10;
        rev=rev*10+lastdigit;

    }
    cout<<rev;
    return 0;
}