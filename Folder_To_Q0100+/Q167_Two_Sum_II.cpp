class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v;
        int left = 0;
        int right = numbers.size()-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum<target){
                left++;
            }else if(sum>target){
                right--;
            }else if(sum == target){
                v.push_back(left+1);
                v.push_back(right+1);
                break;
            }
        }
        return v;
    }
};
