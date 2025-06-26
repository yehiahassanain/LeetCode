class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n = heights.size();
        int mx_area = 0;
        for (int i=0;i<=n;i++) {
            while (!st.empty() &&
                (i == n|| heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                mx_area = max(mx_area, height * width);
            }
            st.push(i);
        }
        return mx_area;
    }
};