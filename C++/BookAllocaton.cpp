#include<iostream>
#include<vector>
using namespace std;

bool isPossible(int arr[],int size, int totalstd , int mid){
int totalpage=0;
int stdcount=1;

for(int i=0;i<size;i++){
    if(totalpage + arr[i] <= mid){
        totalpage = totalpage + arr[i];
    }
    else {
        stdcount++;
       if(stdcount>totalstd || arr[i]>mid) return false;
       else{
          totalpage =0;
          totalpage = totalpage + arr[i];
       }
    }
}
return true;





}


int allocateBooks(int arr[],int totalstd,int size){

int start = 0;
int totalpage=0;
for(int i =0;i<size;i++){
    totalpage  = totalpage + arr[i];
}
int end = totalpage;

int result=0;


while(start<=end){
    int mid = start + (end-start)/2;
    if(isPossible(arr,size,totalstd,mid)){
        end = mid -1;
       result = mid;
    }
    else{
      start = mid + 1;
    }
    
}
return result;


}



int main(){
  
   int arr[] = {10,20,30,40};
   int student = 2;
   int size=sizeof(arr)/sizeof(arr[0]);
   cout<<allocateBooks(arr,student,size);

}




// Appraoch - 
// 1.this  is the where we try all possible outcomes
// 2.first find the sample space of outcome i.e the 0 - total no of page present there
// 3.then after find the mid part of that 
//      i. if (Mid is PossibleSOluction) it means element after mid are also PossibleSOluction so why will we checked that elemenst 
//             so,move the end to mid-1.sample space is shorter now , and we check either mid is the answer of elemnt below mid is answer

//     ii. if (Mid is Not  PossibleSOluction) it means element after mid are  PossibleSOluction so why will we checked that elemenst 
//             so,move the start to mid+1.sample space is shorter now , and we check  after  mid is answer or not
// 4.PossibleSOluction function  explain : 
//       1. For parting we need totalpage for each student so create to variable totalpage=0 stdcount=1
//       2. now, start a loop to end of page to dustribute the page
//       3. if totalpage<mid  then totalpage += arr[i] 
//          else (now std1 has fulled his pages ) stdcount++;
//                if(stdcount>totalstd and also (arr[i]>mid)) retrun false
//                else totalpage=0;
//                totalpage = totalpage +  arr[i]
