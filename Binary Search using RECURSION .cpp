class Solution {
    private:
   int  binarySearch(vector<int> &nums , int low , int high , int &target){
        if(low > high){
            return -1;
        }
        int mid = low + (high - low)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid] > target){
           return binarySearch(nums , low , mid-1,target);
        }
        else {
            return binarySearch(nums, mid + 1 , high , target);
        }
return -1;
    }
public:
    int search(vector<int>& nums, int target) {

        //using RECURSION 
        //TC = O(log (base(2)) N)
       return  binarySearch(nums, 0 , nums.size()-1,target);
       
    }
};
