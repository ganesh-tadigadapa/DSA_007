class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int largest=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]>nums[largest]){
                largest=i;

            }
        }
     for(int j=0;j<n;j++){
       if(nums[largest]<(nums[j]*2) && j!=largest){
           return -1;
       
         
       }
        
     }
     return largest;
    
    }
};
