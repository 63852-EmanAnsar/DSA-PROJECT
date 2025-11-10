#include <iostream>
#include <string>
using namespace std;

struct Node {
    string word;
    string hint;
    Node* next;

    Node(string wo, string hi) {
        word=wo;
        hint=hi;
        next=NULL;
    }
};


void insertNode(Node*& head, string word, string hint) {
    Node* newNode=new Node(word, hint); 

    if (head==NULL) {
        head=newNode;
    } 
	else {
        Node* temp=head;
        while (temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
    }

    cout<<"Inserted word: "<<word;
	cout<<" "<<"Hint"<<" "<<hint<< endl;
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


int main() {
    Node* head=NULL;
    int total;
    
    insertNode(head, "apple", "a fruit");
    insertNode(head, "dog", "loyal animal");
    insertNode(head, "book", "good habit");


    total=countNodes(head);
    cout<<"Total words in list: "<<total<<endl;


    cout<<"Words in list:\n";
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->word<<": "<< temp->hint<<endl;
        temp=temp->next;
    }

    return 0;
}

