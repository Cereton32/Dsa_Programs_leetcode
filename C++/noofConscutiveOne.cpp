class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int start=0,end=0;
        int result=0;
        while(start<n){
            int temp;
            if(nums[start]==0) start++;
            else{
                 end=start;
                 while(end<n &&  nums[end]==1 ) end++;
                 temp=(end-start);
                 if(temp>result) result= temp;
                 start=end;
                 }
        }
        return result;
    }
};