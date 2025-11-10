#include<iostream>
using namespace std;

struct Node{
	string word;
    string hint;
    Node* next;
    
    Node(string wo, string hi){
    word=wo;
    hint=hi;
    next=NULL;
	}
};

void insertNode(Node* &head,string word,string hint){
	Node* newNode=new Node(word,hint);
	
	if(head==NULL){
	head=newNode;
	}
	
	else {
        Node* temp=head;
        while (temp->next!=NULL)
        temp=temp->next;
        temp->next=newNode;
    }
    
}

int countNodes(Node* head) {
    int count=0;
    Node* temp=head;
    while (temp!=NULL) {
    count++;
    temp=temp->next;
    }
    
    return count;
}


int main(){
	
	
	}
