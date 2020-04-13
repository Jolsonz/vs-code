    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        sort(strs.begin(),strs.end());
        for(int i=0;;i++){
            if(strs[0][i]!=strs[strs.size()-1][i]) return strs[0].substr(0,i);
        }
    }