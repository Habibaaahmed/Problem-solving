class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string> myStack;
        istringstream iss(s);
        string word;
        while(iss >> word){
            myStack.push(word);

        }
        return myStack.top().length();
        
    }
};