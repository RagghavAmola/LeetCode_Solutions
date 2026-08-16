class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int qty=0;
        int lwall;
        for(int i=0;i<height.size();i++){
            while (!s.empty() && height[i] > height[s.top()]) {
            int bottom_index = s.top(); 
            s.pop(); // This is the valley/bottom element
            
            if (s.empty()) break; 

            // The new top of the stack is the true left wall for this segment
            int left_wall_index = s.top();
            
            // Calculate horizontal bounds
            int bounded_height = min(height[left_wall_index], height[i]) - height[bottom_index];
            int width = i - left_wall_index - 1;
            
            qty += bounded_height * width;
        }
        s.push(i);
                
        }
        return qty; 
    }       
};