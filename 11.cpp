class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int area = 0;
        while(start < end){
            int lower = height[start] < height[end] ? height[start] : height[end];
            area = max(lower * (end-start), area);
            height[start] > height[end] ? end-- : start++;

        }

        return area;
    }
};