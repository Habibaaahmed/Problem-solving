class Solution {
public:
    string reverseWords(string s) {
        stack<string> myStack;
        string result;
        istringstream iss(s);
        string word;
        while(iss >> word){
            myStack.push(word);
        }
        while(myStack.size()>1){
            result+=myStack.top()+" ";
            myStack.pop();       
        }
        return result+myStack.top();
        
    }
};