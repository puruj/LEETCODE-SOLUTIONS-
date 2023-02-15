#include <vector>
#include <iostream>
using namespace std;

/*
Time Complexity: O(n*m) where n is the length of the input vector 'strs' and m is the length of the longest string in the vector.
 In the worst case, we need to compare all strings in the vector to find the longest common prefix. The while loop checks the prefix against each string in the vector one character at a time, resulting in a time complexity of O(m) per string. Since we are comparing all strings in the vector, the total time complexity is O(n*m).
 Space Complexity: O(1) because we only use a constant amount of extra space for the prefix string.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        auto prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            while(strs[i].find(prefix) != 0){
                prefix = prefix.substr(0, prefix.length() - 1);
                if(prefix == ""){
                    return "";
                }
            }
        }
        return prefix;
    }
};
