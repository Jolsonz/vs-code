/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
    stack<int> s;
public:
    /** Initialize your data structure here. */
    // 就是pop和front比较麻烦。
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s.push(x);//不变
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int> h;//辅助栈
        while(!s.empty()){
            h.push(s.top());
            s.pop();
        }
        int x=h.top();
        h.pop();//这个栈顶的不要
        while(!h.empty()){
            s.push(h.top());
            h.pop();
        }
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        // 其实就是q.front
        stack<int> h;//辅助栈
        while(!s.empty()){
            h.push(s.top());
            s.pop();
        }
        int x=h.top();
        //唯一的区别，栈顶的那个元素还要。
        while(!h.empty()){
            s.push(h.top());
            h.pop();
        }
        return x;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

