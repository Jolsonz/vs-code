/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack {
    queue<int> q;
public:
    /** Initialize your data structure here. */
    MyStack() {
        // 构造函数，不用管它
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        //把前面的所有都给重新压入，这样就实现了栈,只有这个操作不同
        int s=q.size();
        q.push(x);
        while(s--){
            int temp=q.front();
            q.pop();
            q.push(temp);
        }

    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        //注意这里要返回值的哦。
        int s=q.front();
        q.pop();
        return s;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end

