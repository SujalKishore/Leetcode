#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size(); // Defining n as the length of the array nums
        for (int val : nums){ // For each element val in the array nums
            int freq = 0; // Initializing frequency counter to 0

            for (int el : nums){ // For each element el in the array nums
                if(el == val){ // If the current element el is equal to val
                    freq++; // Incrementing the frequency counter
                }
            }

            if (freq > n/2){ // If the frequency of val is greater than n/2, it means val is the majority element
                return val; // Returning the majority element
            }
        }
        return -1; // Returning -1 if no majority element is found (though the problem guarantees that there will be one)
    }
    
};