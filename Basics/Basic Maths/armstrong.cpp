#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,cube=0;
    
    cin>>n;
    int temp=n;
    while(n){
        int ld=n%10;
        cube=cube+ld*ld*ld;
        n=n/10;
    }
    if(cube==temp){
        return true;
    }
    else{
        return false;
    }
    return 0;
}