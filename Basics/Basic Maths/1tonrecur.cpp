#include <iostream>
using namespace std;
int sum =1;
void recur(int n){
    
    
    if(n==0){
        return;
    }
    
    recur(n-1);
    sum = sum*n;
    
        
}
int main(){
    int num;
    cin>>num;
    recur(num);
    cout<<sum;
    return 0;
}