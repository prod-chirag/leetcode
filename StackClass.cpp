#include <iostream>

using namespace std;

class Stack{
    private:
    int top;
    int arr[5];

    public:
    Stack (){
        top = - 1;
        for (int i=0; i<5; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if (top == -1){
            return true;
        }else{
            return false;
        }
    }

    bool isFull(){
        if(top == 4){
            return true;
        }else{
            return false;
        }
    }

    int pop(){
        if (isEmpty()){
            cout << "Stack UnderFlow" << endl;
            return 0;
        }else{
            int toReturn = arr[top];
            arr[top] = 0;
            top--;
            return toReturn;
        }
    }

    void push(int nbr){
        if (isFull()){
            cout << "Stack Overflow" <<endl;
        }else{
            top++;
            arr[top] = nbr;
        }
    }

    int count(){
        return top + 1;
    }

    int peet(int pos){
        if (isEmpty()){
            cout << "Stack Empty" << endl;
            return 0;
        }else{
            return arr[pos];
        }
    }

    void Change(int pos, int val){
        if (isEmpty()){
            cout << "The stack is empty" <<endl;
        }else{
            arr[pos] = val;
        }
    }

    void Display(){
        if (isEmpty()){
            cout << "The stack is empty" << endl;
        }else{
            cout << "The elements in the Stack are: " << endl;
            for (int i=top; i>=0; --i){
                cout << arr[i] << endl;
            }
        }
    }
};


int main(){
    Stack chirag = Stack();
    chirag.push(1);
    chirag.push(2);
    chirag.push(3);
    chirag.push(4);
    chirag.Display();
    chirag.pop();
    chirag.Display();
    chirag.Change(3, 100);
    int result = chirag.peet(3);
    cout << result << endl;
    chirag.Display();
    return 0;
}