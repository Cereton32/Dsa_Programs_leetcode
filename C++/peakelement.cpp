class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[nums.size()-1]>nums[nums.size()-2]) return nums.size()-1;
        int low=1;
        int high=nums.size()-2;
        while(low<=high){
            int mid= low + (high-low)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1] )  return mid;
            else if(nums[mid]>nums[mid-1]) low=mid+1;
            else high=mid-1;
            
        }
        return -1;
    } 




    /////////=-
    class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=0,end=n-1;
        
        
        while(start<end){

            
            int mid=start+(end-start)/2;
            if(arr[mid]<arr[mid+1]){
                start = mid + 1;
            }
            else {
                end = mid;
            }
            
        }
        return start;
    }
};