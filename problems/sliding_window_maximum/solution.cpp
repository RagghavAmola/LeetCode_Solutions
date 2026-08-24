class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        
        deque <int> dq;
        
        for(int i=0; i < n; i++) {
            
            // Update deque to maintain current window
            if (!dq.empty() && dq.front() <= (i-k)) {
                dq.pop_front();
            }
            
            /* Maintain the monotonic (decreasing) 
            order of elements in deque */
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }
            
            // Add current elements index to the deque
            dq.push_back(i);
            
            /* Store the maximum element from 
            the first window possible */
            if (i >= (k-1)) {
                ans.push_back(nums[dq.front()]);
            }
        }
        
        // Return the stored result
        return ans;   
    }
};