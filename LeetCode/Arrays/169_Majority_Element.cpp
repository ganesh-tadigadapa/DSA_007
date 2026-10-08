class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int bhai;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                bhai=nums[i];
            }
            if(nums[i]==bhai){
                count++;
            }
            else{
                count--;
            }
        }
        return bhai;
    }
};
