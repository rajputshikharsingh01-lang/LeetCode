
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s, ans;

        for(int x : nums1)
            s.insert(x);

        for(int x : nums2) {
            if(s.find(x) != s.end())
                ans.insert(x);
        }

        return vector<int>(ans.begin(), ans.end());
    }
};
