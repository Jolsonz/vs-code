/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
    // 有趣的使用了pair来解决寻找最小值的问题。
    int min=INT_MAX;
    stack<pair<int,int>> minStack;//stack压如一个pair。
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        if(x<min) min=x;
        minStack.push(make_pair(min, x));
    }
    
    void pop() {
        minStack.pop();
        if (minStack.empty()) {
            min = INT_MAX;
        } else {
            min = minStack.top().first;//每个栈的最小值都在pair的first里
        }
    }
    
    int top() {
        return minStack.top().second;
    }
    
    int getMin() {
        return minStack.top().first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

