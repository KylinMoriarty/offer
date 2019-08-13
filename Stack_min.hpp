#ifndef STACK_MIN_HPP_INCLUDED
#define STACK_MIN_HPP_INCLUDED

class Stack_min
{
public:
    void push(int value) {
        data.push(value);
        if(smin.empty())
            smin.push(value);
        else if(value<smin.top())
            smin.push(value);
        else
            smin.push(smin.top());
    }
    void pop() {
        if(!data.empty()){
            data.pop();
            smin.pop();
        }

    }
    int top() {
        return data.top();
    }
    int min() {
        return smin.top();
    }
private:
    stack<int> data;
    stack<int> smin;
};

#endif // STACK_MIN_HPP_INCLUDED
