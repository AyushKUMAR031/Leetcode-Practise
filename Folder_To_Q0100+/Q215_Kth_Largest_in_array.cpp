class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=n/2-1;i>=0;i--){
            heapify(nums,n,i);
        }
        // for(int a : nums){
        //         cout<<a<<" ";
        //     }
        // cout<<endl;
        //we will be doing heap sort kth times and reducing(heapify) the heap.
        for(int i=n-1;i>=n-k;i--){
            swap(nums[0],nums[i]);
            heapify(nums,i,0);
            // for(int a : nums){
            //     cout<<a<<" ";
            // }
            // cout<<endl;
        }
        return nums[n-k];
    }
private:
    void heapify(vector<int>& nums,int n,int i){
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && nums[left] > nums[largest]){
            largest = left;
        }
        if(right < n && nums[right] > nums[largest]){
            largest = right;
        }

        if(largest != i){
            swap(nums[i],nums[largest]);
            heapify(nums,n,largest);
        }
    }
};
