class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s.size()!=t.size())
        return false;


        if(s.size()>=1){

            for(int i;i<s.length();i++){
            if(s[i]!=t[i])
                return false;
            
            }

        }
        return true;
    
    }
};
