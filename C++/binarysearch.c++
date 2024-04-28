#include <iostream>
using namespace std;

void rev(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
int main() {
    int n,k;
    
  n=6;
  int arr[]={1,2,3,4,5,6};
  cout<<"no you want to reverse";
  cin>>k;
  if(k<0) k=k+n;
  if(k>n) k=k%n;
  rev(arr,n-k,n-1);
  rev(arr,0,n-k-1);
  rev(arr,0,n-1);
  printarr(arr,n);
  
}
