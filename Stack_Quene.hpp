#ifndef STACK_QUENE_HPP_INCLUDED
#define STACK_QUENE_HPP_INCLUDED

class Stack_Quene
{
public:
      // ����ջģ����в���
      void push(int node) {
          stack1.push(node);
      }
      // ����ջģ�����ɾ��
      int pop() {

          // stack2���
          if(stack2.empty()){
              while(stack1.size()>0)
              {
                  int data = stack1.top();
                  stack2.push(data);
                  stack1.pop();
              }
          }

          int temp = stack2.top();
          stack2.pop();
          return temp;
      }

  private:
      stack<int> stack1;
      stack<int> stack2;
};

//        Stack_Quene a;
//        a.push(1);
//        a.push(2);
//        cout<<a.pop();

#endif // STACK_QUENE_HPP_INCLUDED
