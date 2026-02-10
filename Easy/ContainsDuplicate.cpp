#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input vector
        sort(nums.begin(),nums.end()); // Sort the vector to bring duplicates together
        for (int i=0; i<n-1; i++){ // Iterate through the sorted vector
            if(nums[i] == nums[i+1]){ // Check if the current element is the same as the next one
                return true; // If a duplicate is found, return true
            }
        }
        return false; // If no duplicates are found after checking all elements, return false
    }
};