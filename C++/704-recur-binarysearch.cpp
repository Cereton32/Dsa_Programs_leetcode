class Solution {
    public:
      int isFound( vector<int>&arr,int start,int end,int target){
        if(start>end) return -1;
        int mid = start + (end-start)/2;
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]){
           return isFound(arr,mid+1,end,target);
        }
        else{
            return isFound(arr,start,mid-1,target);
        }

      }


public:
    int search(vector<int>& nums, int target) {
      int start=0;
      int end = nums.size()-1;
      int temp = isFound(nums,start,end,target); 
      return temp;


    }

};
auto init = [](){
ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 'c';

}();