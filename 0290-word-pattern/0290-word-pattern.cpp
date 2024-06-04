class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string,int> s_map;
        unordered_map<char,int> pattern_map;
        istringstream iss(s);
        string word;
        vector<string> words;

        while (iss >> word) {
            words.push_back(word);
            if(s_map.count(word)!=0) continue;
            s_map[word]=s_map.size();
        }
        for(auto i:pattern){
            if(pattern_map.count(i)!=0) continue;
            pattern_map[i]=pattern_map.size();
        }
        if(pattern.size() != words.size()){return false;}
        for(int i=0; i<pattern.size();i++){
            if(pattern_map[pattern[i]]!=s_map[words[i]])
            return false;

        }

return true;




    }
};