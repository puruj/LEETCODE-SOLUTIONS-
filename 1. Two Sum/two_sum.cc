#include <vector>
#include <unordered_map>
using namespace std;

/*
 Time complexity: O(n) where n is the size of the input vector 'nums'. This is because in the worst case, we need to iterate through the entire vector once to find the two elements that add up to the target value.
 Space complexity: O(n) because we use an unordered_map to store the elements in the vector along with their indices. In the worst case, the size of the map will be the same as the size of the vector.
*/

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
