class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        string res = "", res2 = "";
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '#')
            s1.push(s[i]);
            else if (s[i] == '#' && !s1.empty())
            s1.pop();
        }
        while(!s1.empty()) {
           res+=s1.top();
           s1.pop();
        }
        for(int i = 0; i < t.size(); i++) {
            if(t[i] != '#')
            s1.push(t[i]);
           else if (t[i] == '#' && !s1.empty())
            s1.pop();
        }
        while(!s1.empty()) {
           res2+=s1.top();
           s1.pop();
        }
        cout<<res<<endl;
        cout<<res2<<endl;
        return res == res2;
        
        
        
    }
};
