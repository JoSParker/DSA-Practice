#include <iostream>
#include <vector>
using namespace std;
void sec(vector <int> a){
    int seclar = INT_MIN; int lar = INT_MIN; int smol=INT_MAX; int secsmol=INT_MAX;
    for(int i = 0;i<a.size();i++){
        if(a[i]>lar){
            lar=a[i];
        }
        if(a[i]<smol){
            smol=a[i];
        }
    }
    for(int i =0;i<a.size();i++){
        if(a[i]>seclar&&a[i]!=lar){
               seclar=a[i];
        }
        if(a[i]<secsmol&&a[i]!=smol){
            secsmol=a[i];
        }
    }
cout<<"sec smolest "<<secsmol;
cout<<"sec largest "<<seclar;

}
int main(){
    vector <int> a = {2,5,3,1,6};
    sec(a);
}