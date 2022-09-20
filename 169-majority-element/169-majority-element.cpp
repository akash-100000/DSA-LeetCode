class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int cand = arr[0];
        int count = 1;
        int n = arr.size();
        for(int i = 1; i<n; i++){
            if(arr[i]==cand){
                count++;
            }else{
                count--;
                if(count==0){
                    cand = arr[i];
                    count = 1;
                }
            }
        }
        return cand;
        
    }
};