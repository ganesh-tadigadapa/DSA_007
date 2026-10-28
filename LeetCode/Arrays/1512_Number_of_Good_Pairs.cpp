class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       
int counter=0;
unordered_map<int,int> freq;

     for(int i=0;i<nums.size();i++){
       counter =counter+freq[nums[i]];
       freq[nums[i]]++;
     }
     return counter;
    }
};
