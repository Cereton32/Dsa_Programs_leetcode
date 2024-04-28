#include<bits/stdc++.h>
using namespace std;


void swap(int &a,int &b){
  int temp =a;
  a=b;
  b=temp;
}
  
// Using Dutch National Flag Algorithm.
void reArrange(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]<0){
            low++;
        }
        else if(arr[high]>0){
            high--;
        }
        else swap(arr[low],arr[high]);
    }
    
}
void displayArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
int main() {
    // Data
    int arr[] = {-2,3,0,-4,5,3};
      int n = sizeof(arr)/sizeof(arr[0]);
      reArrange(arr,n);
    displayArray(arr,n);
    return 0;
}