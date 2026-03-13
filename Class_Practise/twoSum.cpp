//Leetcode Problem : https://leetcode.com/problems/two-sum/description/
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        for(int x = 0; x < nums.size(); x++) {
            for(int y = x + 1; y < nums.size(); y++) {
                if(nums[x] + nums[y] == target) {
                    ans.push_back(x);
                    ans.push_back(y);
                    return ans;
                }
            }
        }

        return ans;
    }
};