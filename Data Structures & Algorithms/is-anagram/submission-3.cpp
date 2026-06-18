class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(26, 0);
        if(s.length() != t.length())return false;
        for(int i=0;i<s.length();i++){
            int x= s[i]-'a';
            int y= t[i]-'a';
            v[x]++;
            v[y]--;
        }
        for(int i=0;i<26;i++){
            if(v[i]!=0)return false;
        }
        return true;
    }
};
