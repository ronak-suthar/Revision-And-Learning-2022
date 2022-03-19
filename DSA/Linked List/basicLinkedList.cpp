#include<iostream>

using namespace std;

struct node
{   
    node* next;
    int data;

    node(int val=0){
        data=val;
        next=NULL;
    }
};

int main(void){
    node *head = new node(10);

    head->next = new node(15);

    head->next->next = new node(20);

    node* guide = head;

    while(guide!=NULL){
        cout<<guide->data<<" ";
        guide=guide->next;
    }

    cout<<"\n";

    return 0;
}