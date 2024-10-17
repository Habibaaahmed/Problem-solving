class Solution {
public:
    int maximumSwap(int num) {
        int index_max=1;
        int maxNum=INT_MIN;
        int temp=num;
        vector<int> index_min_arr;
        vector<int> index_max_arr;
        int counter=0;
        
        while(temp){
            counter++;
            if(temp%10>maxNum){
                maxNum=temp%10;
               index_max_arr.push_back(counter);
            }
 
            if(temp%10<maxNum){
               index_min_arr.push_back(counter);
            }
           
            temp/=10;
        }
        
     if(index_min_arr.empty())return num;

     for(auto maxNo:index_max_arr){
        if(maxNo>index_min_arr[index_min_arr.size() - 1]) break;
        index_max=maxNo;
     }

    if (index_max< index_min_arr[index_min_arr.size() - 1]) {
            string numStr=to_string(num);
            swap(numStr[numStr.size()-index_max], numStr[numStr.size()-index_min_arr[index_min_arr.size()-1]]);
            return stoi(numStr);

        }
        return num;
    }
};