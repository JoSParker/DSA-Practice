#include <iostream>
using namespace std;
void recur(int n){
     
     if(n<=0){
        return;
     }
     cout<<"buyaka"<<endl;
     n--;
     recur(n);
}
int main(){
    int inp;
    cin>>inp;
    recur(inp);
}