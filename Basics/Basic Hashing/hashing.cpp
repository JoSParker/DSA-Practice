#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int max =0;
    cin>>n;
    vector <int> A(n);
    int i=0;
    for(i=0;i<n;i++){
         cin>>A[i];
         if(A[i]>max){
            max = A[i];
         }
    }
    vector <int> hash(max+1);
    for(i=0;i<max+1;i++){
        hash[A[i]]++;
    }
    for(i=0;i<max+1;i++){
        if(hash[i]!=0){
            cout<<i<<"occurs"<<hash[i]<<"times"<<endl;
        }
    }
    return 0;
}