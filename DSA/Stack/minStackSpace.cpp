#include<iostream>
#include<stack>

using namespace std;

int main(void){
    stack<int> s; //stack
    stack<int> ss; //min ele supporting stack

    while(true){
        int choice;

        cout<<"----------Min Stack--------------\n";

        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Min Ele\n";

        cout<<"Enter your choice : ";
        cin>>choice;
        getchar();

        if(choice==1){
            int ele;
            cout<<"Enter Element : ";
            cin>>ele;
            getchar();

            s.push(ele);

            if(ss.empty()){
                ss.push(ele);
            }
            else if(ss.top()>=ele){
                ss.push(ele);
            }   
        }
        else if(choice==2){
            if(s.empty()){
                cout<<"Stack is Empty\n";
                continue;
            }
            else if(ss.top()==s.top()){
                ss.pop();
            }
            s.pop();
        }
        else if(choice==3){
            if(!ss.empty()){
                cout<<"Min Ele is : "<<ss.top()<<"\n";
            }
            else{
                cout<<"Supporting Stack is Empty\n";
            }
        }
        else{
            break;
        }

    }
    return 0;
}