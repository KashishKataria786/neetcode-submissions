class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char, int> mp;
        unordered_map<char, int> mp2;

        for( int i=0;i<s.length();i++){
            mp[s[i]]++;
            mp2[t[i]]++;
        }
        return mp==mp2;
    }
};
