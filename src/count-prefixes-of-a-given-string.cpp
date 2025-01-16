class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        multiset<string> st(words.begin(),words.end());
        string temp="";
        int ct=0;
        for(int i=0;i<s.size();i++)
        {
            temp+=s[i];
            if(st.find(temp)!=st.end()) ct+=st.count(temp);
        }
        return ct;
    }
};