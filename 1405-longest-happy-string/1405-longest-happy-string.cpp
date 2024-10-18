class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
       string result="";
       priority_queue<pair<int,char>> maxHeap;
       if(a>0) maxHeap.push({a,'a'});
       if(b>0) maxHeap.push({b,'b'});
       if(c>0) maxHeap.push({c,'c'});

       while(!maxHeap.empty()){
        auto[count,character]=maxHeap.top();
        maxHeap.pop();
        int resultSize=result.size();
        if(resultSize>=2 && result[resultSize-1]==character && result[resultSize-2]==character ){
            if(maxHeap.empty()) break;

            auto[nextCount,nextCharacter]=maxHeap.top();
            maxHeap.pop();
            result+=nextCharacter;
            nextCount--;

            if(nextCount>0) maxHeap.push({nextCount,nextCharacter});
            
        }else{
            result+=character;
            count--;
        }
        if(count>0) maxHeap.push({count,character});

       }

        return result;  
    }
};