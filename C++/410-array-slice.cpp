class Solution {
public: 
bool isPossible(vector<int>& nums,int size,int k, int mid){
     int totalpage=0;
     int stdcount=1;
     for(int i =0;i<size;i++){
        if(totalpage+nums[i] <= mid){
            totalpage = totalpage + nums[i];
        }
        else {
            stdcount++;
            if(stdcount>k || nums[i]>mid) return false;
            else {
              
                totalpage =  nums[i];
            }
        }
     } 
     return true;


}
public:
    int splitArray(vector<int>& nums, int k) {
        int size= nums.size();
        int totalval=0;
        for(int i =0;i<size;i++){
          totalval+=nums[i];
        }
        int start=0;
        int end = totalval;
        int ans = 0;
        while(start<=end){
          int mid = start + (end-start)/2 ;
         if(isPossible(nums,size,k,mid)){
            end = mid - 1;
           ans = mid;
         }
         else{
            start = mid + 1;
         }

        }
        return ans;

    }
};