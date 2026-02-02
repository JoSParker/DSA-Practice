#include <iostream>
#include <string>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<=5;i++){
        
            
            std::cout<<string(5-i-1,' ')<<string(2*i+1,'*')<<string(5-i-1,' ');
            cout<<"\n";
            
            
        }
        
        cout<<"\n";
    
    return 0;
}