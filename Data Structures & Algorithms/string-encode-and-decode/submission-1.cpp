class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs.size();i++){
            string temp="";
            string curr=strs[i];
            for(int j=0;j<curr.length();j++){
                temp+=((curr[j]-'a')+'A');
            }
            ans+=temp;
            ans+=':';
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>v;
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]==':'){
                v.push_back(temp);
                temp="";
            }
            else{
                char ch= s[i];
                ch=ch-'A';
                ch=ch+'a';
                temp+=ch;
            }
        }
        return v;  
    }
};
