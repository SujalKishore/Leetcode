#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for (int i=0; i<4; i++){
            if (mat==target) return true;
            for (int r=0; r<n; r++){
                for (int c = r + 1; c<n; c++){
                    swap(mat[r][c], mat[c][r]);
                }
            }
            for (int r=0; r<n; r++){
                reverse(mat[r].begin(),mat[r].end());
            }
        }

        return false;
    }
};