#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        
        vector<int> freq(total + 1, 0);
        
        // Count frequencies
        for (auto &row : grid) {
            for (int num : row) {
                freq[num]++;
            }
        }
        
        int missing = -1, repeated = -1;
        
        for (int i = 1; i <= total; i++) {
            if (freq[i] == 0) missing = i;
            if (freq[i] == 2) repeated = i;
        }
        
        return {repeated, missing};
    }
};