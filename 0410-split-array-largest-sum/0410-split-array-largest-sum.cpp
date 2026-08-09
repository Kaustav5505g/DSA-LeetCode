class Solution {
public:

    bool canSplit(vector<int>& nums, int k, int maxSum) {

        int parts = 1;
        int sum = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(sum + nums[i] <= maxSum) {
                sum = sum + nums[i];
            }
            else {
                parts++;
                sum = nums[i];
            }
        }

        return parts <= k;
    }


    int splitArray(vector<int>& nums, int k) {

        int low = nums[0];
        int high = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] > low) {
                low = nums[i];
            }

            high = high + nums[i];
        }

        int answer = high;

        
        while(low <= high) {

            int mid = (low + high) / 2;

            if(canSplit(nums, k, mid)) {

                answer = mid;
                high = mid - 1;
            }
            else {

                low = mid + 1;
            }
        }

        return answer;
    }
};