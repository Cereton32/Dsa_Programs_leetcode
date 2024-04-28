class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3;
         unordered_set<int> set1(nums1.begin(), nums1.end());
         for(int i=0;i<nums2.size();i++){
            auto it = set1.find(nums2[i]);
            if(it==set1.end()){
                continue;
            }
            else{
                nums3.push_back(nums2[i]);
                set1.erase(nums2[i]);
            }
         }
         return nums3;


    }