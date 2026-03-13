#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> ma;
        unordered_map<char, int> mb;
        if(s.size() != t.size()){
            return false;
        }
        for(int i=0; i<s.size(); i++){
            ma[s[i]]++;
            mb[t[i]]++;
        }
        if(ma==mb) return true;

        return false;
    }
};