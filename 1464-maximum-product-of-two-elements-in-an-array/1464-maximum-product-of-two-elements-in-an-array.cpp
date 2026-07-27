class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = INT_MIN;
int slargest = INT_MIN;

for (int x : nums) {
    if (x >= largest) {
        slargest = largest;
        largest = x;
    }
    else if (x > slargest) {
        slargest = x;
    }
}

return (largest - 1) * (slargest - 1);
    }
};