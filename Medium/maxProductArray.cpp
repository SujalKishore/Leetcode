#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) { // Function to find the maximum product of a subarray
        int maxProduct = nums[0]; // Initialize maxProduct to the first element of the array
        int minProduct = nums[0]; // Initialize minProduct to the first element of the array
        int currProduct = nums[0]; // Initialize currProduct to the first element of the array
        int n = nums.size(); // Get the size of the input vector

        for (int i=1; i<n; i++){ // Iterate through the array starting from the second element
           if (nums[i] < 0 ){ // If the current element is negative, swap maxProduct and minProduct
            swap(maxProduct, minProduct); // Swap the maximum and minimum products because multiplying by a negative number will flip the signs
           }
            maxProduct = max(nums[i],maxProduct * nums[i]); // Update maxProduct to be the maximum of the current element and the product of maxProduct and the current element
            minProduct = min(nums[i],minProduct * nums[i]); // Update minProduct to be the minimum of the current element and the product of minProduct and the current element
            currProduct = max(currProduct,maxProduct); // Update currProduct to be the maximum of the current product and maxProduct
        }
        return currProduct; // Return the maximum product found
    }
};