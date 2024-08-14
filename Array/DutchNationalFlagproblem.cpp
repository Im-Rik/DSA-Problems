//Given an array A[] consisting of only 0s, 1s, and 2s. The task is to sort the array, i.e., put all 0s first, then all 1s and all 2s in last.

//https://www.youtube.com/watch?v=tp8JIuCXBaU

// 0 --- low-1 : 0's
// low --- mid -1 : 1's
// mid --- high -1 : unsorted //This has to be sorted
// high --- n -1 : 2's

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();

        int mid = 0;
        int low = 0;
        int high = n-1;

        for(int i = 0; i<n; i++){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[high],nums[mid]);
                high--;
            }
        }
    }
};
