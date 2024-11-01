class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        res.push_back(s[0]);
        int cnt=1,n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]==res.back()){
                cnt++;
                if(cnt<3){
                    res.push_back(s[i]);
                }
            }
            if(s[i]!=res.back()){
                cnt=1;
                res.push_back(s[i]);
            }
        }
        return res;
    }
};