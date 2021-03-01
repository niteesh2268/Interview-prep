class Solution {
public:
    bool isValid(string s) {
        stack<char>paren;
        for(char c :s){
            if(c == '(' || c == '[' || c == '{') 
                paren.push(c);
            else {
                if(paren.empty()) return false;
                if(c==')' && paren.top()!='(') return false;
                if(c=='}' && paren.top()!='{') return false;
                if(c==']' && paren.top()!='[') return false;
                paren.pop();
            }
        }
        return paren.empty();
    }
};
