class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int target_found = 0;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    target_found = 1;
                    break;
                }
            }

            if (target_found == 1) {
                break;
            }
        }

        return result;
    }
           
};
