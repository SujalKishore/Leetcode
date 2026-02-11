#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input vector
        for (int i = 0; i < n-1; i++){ // Outer loop to traverse through the vector
            for (int j = 0; j < n-i-1; j++){ // Inner loop to compare adjacent elements
                if (nums[j] > nums[j+1]){ // If the current element is greater than the next element, swap them
                    swap (nums[j], nums[j+1]); // Swap the elements
                }
            }
        }
        
    }
};