class Solution {
public:
    string compressedString(string s) {
        string res="";
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==9){
                res+='9';
                res+=s[i];
                mp.erase(s[i]);
            }
            mp[s[i]]++;
            if(i<s.size() && s[i]!=s[i+1]){
                res+='0'+mp[s[i]];
                res+=s[i];
                mp.erase(s[i]);
            }
        }
        return res;
    }
};