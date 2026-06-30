class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int mid,low=0,high=letters.size()-1;
    while(low<=high){
        mid=(low+high)/2;
       
        if(letters[mid]<=target)low=mid+1;
        
        else high=mid-1;
    }   return letters[low%letters.size()];
    }
};