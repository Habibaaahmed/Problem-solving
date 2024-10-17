class Solution {
public:
    int maximumSwap(int num) {
        int index_max=1;
        int index_min=0;
        vector<int> index_max_arr;
        int maxNum=INT_MIN;
        int temp=num;
        int counter=0;
        
        while(temp){
            counter++;
            if(temp%10>maxNum){
                maxNum=temp%10;
               index_max_arr.push_back(counter);
            }
            else if (temp%10<maxNum) index_min=counter;
            temp/=10;
        }
    
     for(auto maxNo:index_max_arr){
        if(maxNo>index_min) break;
        index_max=maxNo;
     }

    if (index_max< index_min) {
            string numStr=to_string(num);
            swap(numStr[numStr.size()-index_max], numStr[numStr.size()-index_min]);
            return stoi(numStr);
        }
    return num;
    }
};