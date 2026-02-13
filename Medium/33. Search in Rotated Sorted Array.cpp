#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) { // Function to search for a target value in a rotated sorted array
        int n = nums.size(); // Get the size of the input vector
        int start = 0, end = n-1; // Initialize start and end pointers for binary search
        
        while (start <= end){ // Loop until the start pointer is less than or equal to the end pointer 
            int mid = start + (end-start)/2; // Calculate the middle index to avoid potential overflow
            if (nums[mid] == target){ // If the middle element is the target, return its index
                return mid; // Return the index of the target value
            }
            if (nums[start] <= nums[mid]){ // Check if the left half of the array is sorted 
                if (nums[start] <= target && target <= nums[mid]){ // If the target is within the sorted left half, adjust the end pointer to search in the left half
                    end = mid -1; // Move the end pointer to the left of mid to continue searching in the left half
                }
                else { 
                    start = mid +1; // Move the start pointer to the right of mid to continue searching in the right half
                }
            }
            else{
                if (nums[mid] <= target && target <= nums[end]){ // If the target is within the sorted right half, adjust the start pointer to search in the right half
                    start = mid +1; // Move the start pointer to the right of mid to continue searching in the right half
                }
                else {
                    end = mid -1; // Move the end pointer to the left of mid to continue searching in the left half
                }
            }
           
        }
        return -1; // If the target value is not found in the array, return -1
    }
};