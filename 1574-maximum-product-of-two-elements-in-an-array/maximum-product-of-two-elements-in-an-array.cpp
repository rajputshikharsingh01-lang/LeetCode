class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // for(int i = 0;i < nums.size();i++){
        //     for(int j = i+1;j < nums.size();j++){
        //         int temp = nums[j];
        //         nums[j] = nums[j+1];
        //         nums[j+1] = temp;
        //     }
        // }
        sort(nums.begin(),nums.end());
        return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        
    }
};