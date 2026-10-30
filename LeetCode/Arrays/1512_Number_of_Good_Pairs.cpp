class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter=0;
         int freq[101]={0};
         for(int x:nums){
            counter=counter+freq[x];
            freq[x]++;
         }
        
        return counter;
    }
};
