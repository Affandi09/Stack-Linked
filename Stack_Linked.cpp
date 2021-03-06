#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#define MAX_STACK_SIZE 10
using namespace std;
struct Element {
    int data;
    struct Element* next;
};

class MyStack {
    private:
    Element stack[MAX_STACK_SIZE];

    int *top=NULL;

    public:
    
   
    void push(int data){
    	struct Element* newNode;
    	newNode = (struct Element*)malloc(sizeof(struct Element));
        Element item;
        item.data=data;
        if (top==NULL){
        	
            
            newNode->next=NULL;
        }else {
		
            newNode->next=top;
            top = newNode;
        }
    }
        
    
    Element pop(){
        Element item;
        if (top==NULL){
            
            struct Element* temp;
        	temp=top;
        	top=top->next;
        	delete temp;
        } else {
            std::cout<<"Stack Kosong"<<std::endl;
        }
        return item;
    }
    void display(){
        if (top=NULL){
            std::cout<<"Stack Kosong"<<std::endl;
        } else {
            struct Element* temp=top;
            while(temp->next != NULL){
            	cout<<" "<<temp->data;
            	temp=temp->next;
			}
            cout<<" "<<temp->data;
        }
    }
    
};

int main()
{
    MyStack s;
    s.push(8);
    s.push(3);
    s.push(2);
    s.push(9);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
