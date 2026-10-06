

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        int count[26] = {0};

        // Count available characters in magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }

        // Validate each character in ransomNote
        for (char c : ransomNote) {
            if (--count[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};