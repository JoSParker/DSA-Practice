#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,j=0,i;
    cin >> n;
    vector<int> arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int min;
    for(i=0;i<n-2;i++){
          min = i;
          for(j=i;j<n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
          }
          swap(arr[i],arr[min]);
        
    }
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}