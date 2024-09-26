class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mymap;
        
        // Count the occurrences of each character in the magazine
        for (int i = 0; i < magazine.size(); ++i){
            mymap[magazine[i]]++;
        }

        // Check if ransomNote can be constructed from the magazine
        for (int j = 0; j < ransomNote.size(); ++j){
            if (mymap.find(ransomNote[j]) == mymap.end() || mymap[ransomNote[j]] == 0) {
                return false;  // Character is not found or no more occurrences left
            } else {
                mymap[ransomNote[j]]--;  // Use one occurrence of the character
            }
        }

        return true;
    }
};
