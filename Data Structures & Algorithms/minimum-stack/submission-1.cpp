class MinStack {
    stack<int>s,s1;
public:
    MinStack() {
        stack<int>s,s1;
        int mini = INT_MAX;
    }
    
    void push(int val) {
        s.push(val);
        if(s1.size()==0){
            s1.push(val);
        }
        else if(s1.top()>=val){
            s1.push(val);
        }
    }
    
    void pop() {
        if(s.top()==s1.top()){
            s1.pop();
        }
        s.pop();
        
    }
    
    int top() {
       return s.top();
    }
    
    int getMin() {
       return s1.top();
    }
};
