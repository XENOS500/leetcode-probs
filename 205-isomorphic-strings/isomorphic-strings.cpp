class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;
        
        for (int i = 0; i < s.length(); i++) {
            char char_s = s[i];
            char char_t = t[i];
            
            // Check if mapping exists in both directions
            if (s_to_t.find(char_s) == s_to_t.end() && t_to_s.find(char_t) == t_to_s.end()) {
                s_to_t[char_s] = char_t;
                t_to_s[char_t] = char_s;
            } 
            // If they are already mapped, check if they map to each other
            else if (s_to_t[char_s] != char_t || t_to_s[char_t] != char_s) {
                return false;
            }
        }
        return true;
    }
};