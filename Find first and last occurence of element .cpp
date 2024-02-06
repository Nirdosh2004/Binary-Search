class Solution {
    private:
    int firstIndex(vector<int> &nums , int n , int &target){
        int low = 0 , high  = nums.size()-1;
        int first = -1;
        while( low <= high ){
            int mid = low +(high - low )/2;
            if(nums[mid] == target){
                first = mid;
                high = mid - 1;
            }
            if(nums[mid] < target){
            low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return first;
    }
    int lastIndex(vector<int> &nums , int n , int  &target){
        int low = 0 , high = nums.size()-1;
        int last = -1;
        while( low <= high ){
            int  mid = low + (high - low )/2;
            if(nums[mid]==target){
                last = mid;
                low = mid + 1;
            }
            if(nums[mid ] > target){
                high = mid - 1;
            }
            else{
                low = mid  + 1;
            }
        }
        return last;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Time complexity: O(2 log N)
        // Space complexity: O(1)
        int fi = firstIndex(nums , nums.size()-1 , target);
        if(fi == -1) return {-1,-1};
        int la = lastIndex(nums , nums.size()-1,target);
        return {fi , la};
    }
};
