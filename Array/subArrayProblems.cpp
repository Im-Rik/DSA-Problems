//Given an array arr containing n integers and an integer k. Your task is to find the length of the longest Sub-Array with the sum of the elements equal to the given value k.


//Brute -- Almost O(n^3) which can be done as O(n^2) at best

int longestSubArrayBruteForce(const vector<int>& arr, int k) {
    int n = arr.size();
    int maxLength = 0;

    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            if (sum == k) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }

    return maxLength;
}



//Better -- Using hashing 
    int lenOfLongSubarr(int a[], int n, int K) { 
        unordered_map<int, int> mpp;
        int sum = 0;
        int maxLen = 0;
        
        for(int i = 0; i < n; i++) {
            sum += a[i];
            
            if(sum == K) {
                maxLen = i + 1;
            }
            
            if(mpp.find(sum - K) != mpp.end()) {
                maxLen = max(maxLen, i - mpp[sum - K]);
            }
            
            if(mpp.find(sum) == mpp.end()) {
                mpp[sum] = i;
            }
        }
        
        return maxLen;
    }

//Best -- Two pointer approach

int lenOfLongSubarr(int a[], int n, int K) { 
    
        int maxLen = 0;
        int l = 0;
        int r = 0;
        int sum = 0;
        
        while (r < n) {
            sum += a[r];
            
            while (sum > K && l <= r) {
                sum -= a[l];
                l++;
            }
            
            if (sum == K) {
                maxLen = max(maxLen, r - l + 1);
            }
            
            r++;
        }
        
        return maxLen;
    }
