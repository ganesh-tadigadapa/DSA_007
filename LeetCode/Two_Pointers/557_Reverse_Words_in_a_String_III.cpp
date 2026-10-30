class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        
        for(int i=0;i<s.size();i++){

        string word="";
        while(i<s.size() && s[i]!=' '){
            word=word+s[i];
            i++;
        }
        reverse(word.begin(),word.end());
    if(word.length()>0){
           ans=ans+" "+word;
        }
        // reverse(ans.begin(),ans.end());
        
        }
        return ans.substr(1);
    }
};
