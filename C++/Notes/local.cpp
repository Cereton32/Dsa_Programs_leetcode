#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// ----------------------- example 1 -------------------

//   int fact(int n){
//   int result =1;
//   if(n==0) return 1;
//   int number = fact(n-1); //here number will stopre 1 2 3 4 5 simaltonues
//   result = number * n;
//   return result;
//  }

// int main(){
// int n;
// cin>>n;
//  int ans = fact(n);
//    cout<<ans;

// }



// -------------------------- example 2 -----------------------

// void reachHome(int src,int dest){
//      if(src==dest){
//         cout<<"finally,you've reached your home at : " <<src<<endl;
//         return ;
//      }
//      cout<<"you havent reached your home at : \t "<<src<<endl;
      
     
//      reachHome(++src,dest);


// }

// int main(){
//  int src=1;
//  int dest = 10;
//  reachHome(src,dest);



// }

// -------------------------- example 3 fabonaci seris  -----------------------

// void fabo(int a, int b,int count){
//     if(count==0) return ;
//     int temp= a + b ;
//     cout<<temp<<endl;
    
//     fabo(b,temp,count--);


// }


// int main(){

//  int a=0,b=1;
//  int count;
//  cout<<"enter the length of fabonacii";
//  cin>>count;
 
//  if(count==1) cout<<a<<endl;
//  else if(count==2) cout<<a<<endl<<b<<endl;
//   else{
//     cout<<a<<endl<<b<<endl;
//     count = count - 2;
//     fabo(a,b,count);
//   }
  

// }




//------------------------example 4 check if array is sorted using recursion---------------------//
bool isSorted(int arr[],int n){
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    bool temp = isSorted(arr+1,n-1);
    return temp;
    
}

int main(){
    int n;
    cout<<"give the size of array  : \n ";
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"\n"<<i <<"\t"<<"element of array is : \n ";
        cin>>arr[i];
    }
    
    if(isSorted(arr,n)) cout<<"\narray is sorted ";
    else cout<<"array is not sorted";
    
}