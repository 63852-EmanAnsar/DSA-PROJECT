#include<iostream>
#include <fstream>
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

Node* getNode(Node* head, int index) {
    Node* temp=head;
    int i=0;
    while (temp!=NULL && i<index) {
        temp=temp->next;
        i++;
    }
    
    return temp;
}



int main(){
	Node* head = NULL; 
    int levelChoice;
    cout<<"Select Difficulty Level:" << endl;
    cout<<"1. Easy" << endl;
    cout<<"2. Medium" << endl;
    cout<<"3. Hard" << endl;
    cout<<"Enter your choice (1-3): ";
    cin>> levelChoice;
    cin.ignore();

    string filename;

    if (levelChoice == 1)
        filename = "easy.txt";
    else if (levelChoice == 2)
        filename = "medium.txt";
    else
    filename = "hard.txt";

	ifstream file(filename.c_str());
    if (!file) {
        cout<<"Error: Could not open file: "<<filename<<endl;
        return 1;
    }
    
    string word, hint;
        while (file>>word) {
            getline(file,hint);
            if (hint.size()>0 && hint[0]==' ')
            hint.erase(0,1);
            insertNode(head,word,hint);
        }
        file.close();
        
     int totalWords=countNodes(head);
        if (totalWords==0) {
            cout<<"No words found in "<<filename<<"!"<<endl;
            continue;
        }
}
