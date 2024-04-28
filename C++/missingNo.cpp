class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n  =nums.size();
        int a=0;
         int b=0;
         for(int i=0;i<n;i++){
            a = a ^ (nums[i]);
            b = b ^ (i+1);
         }
         return (a^b);
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int N = n;
        int temp  = (N*(N+1))/2;
        for(int i=0;i<n;i++){
            temp = temp - nums[i];
        }
        return temp;
    }
};