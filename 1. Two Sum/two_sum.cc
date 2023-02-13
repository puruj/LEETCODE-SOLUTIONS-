#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> nums_index;
        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];
            if(nums_index.count(comp)){
                return {nums_index[comp],i};
            }else{
                nums_index[nums[i]] = i;
            }
        }
        return {0,0};
    }
};
