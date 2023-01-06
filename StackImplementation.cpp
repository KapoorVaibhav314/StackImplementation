#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
     int *arr;
     int top;
     int size;

     Stack(int size){
        this -> size = size;
        //Creating an array of that size
        arr = new int[size];
        top = -1;
     }
     
     //push will recieve in parameters element we want to insert
     void push(int element){
      if(size-top>1){
        top++;
        arr[top]=element;
      }
      else{
        cout << "Stack Overflow" << endl;
      }
     }

     void pop(){
        if(top >= 0){
            top--;
        }
        else{
            //element not present but we still trying to pop
            cout << "Stack Underflow" << endl;
        }
     }
     int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
     }
     bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
     }  
};

int main(){
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);
    
    st.pop();
    cout << "top of stack is " << st.peek();
    return 0;
}

//Every operation here is done in O(1)