class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>ans(26);
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            int x=--ans[t[i]-'a'];
            if(x<0)
                return false;
        }
        return true;
    }
};