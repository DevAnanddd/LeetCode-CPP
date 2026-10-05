class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        vector<char> a, b;

       
        for (char ch : s) {
            if (ch == '#') {
                if (!a.empty())
                    a.pop_back();
            }
            else {
                a.push_back(ch);
            }
        }

        
        for (char ch : t) {
            if (ch == '#') {
                if (!b.empty())
                    b.pop_back();
            }
            else {
                b.push_back(ch);
            }
        }

        
        if (a == b)
            return true;
        else
            return false;
    }
};