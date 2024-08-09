//Leetcode : 169

// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may "assume that the majority element always exists" in the array.

//https://youtu.be/nP_ns3uSh80?si=NHLl3p3LJfp97BwY&t=419

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int cnt = 0;
        int ele;
        //Moore's Majority count
        for(int i=0;i<nums.size();i++){
            if(cnt == 0){
                cnt = 1;
                ele = nums[i];
            }else if(nums[i]==ele){
                cnt++;
            }else{
                cnt--;
            }
        }

        return ele;

    }
};
