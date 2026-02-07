#include <bits/stdc++.H>
using namespace std;
int main(){
    int j,n,i;
    cin>>n;
    vector<int> A(n);
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=1;i<n-1;i++){
        j=i;
        while(j>0&&A[j-1]>A[j]){
            swap(A[j],A[j-1]);
            j--;
        }
    }
    for(i=0;i<n;i++){
        cout<<A[i]<<"";
    }
}
//The outer loop runs from index 1 to n-1, selecting elements from the unsorted part.

//The inner loop starts from index j = i and moves leftwards.

//If A[j-1] > A[j], the elements are swapped and j is decremented.

//This process continues until the correct position of the element is found or j becomes 0.

//After each iteration, the subarray from index 0 to i remains sorted.