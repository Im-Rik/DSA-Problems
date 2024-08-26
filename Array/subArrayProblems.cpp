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
