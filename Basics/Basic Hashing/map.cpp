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
   map<int,int> mpp;
   for(i=0;i<n;i++){
      mpp[ A[i]]++;
   }
   for(auto it : mpp){
    cout<<it.first<<" appears "<<it.second<< " times"<<endl;
   }
    return 0;
}