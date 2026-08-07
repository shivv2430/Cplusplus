// Problem_Statement : https://leetcode.com/problems/contains-duplicate/

#include <vector>
using namespace std;

// Brute Force (Time - O(n^2), Space - O(1))
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {

        if (nums[i] == nums[j]) {
          return true;
        }
      }
    }

    return false;
  }
};

// Better optimized approach (Time - O(nlog n), Space - O(1))

class Solution2 {
public:
  bool containsDuplicate(vector<int> &nums) {

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++) {

      if (nums[i] == nums[i + 1]) {
        return true;
      }
    }

    return false;
  }
};