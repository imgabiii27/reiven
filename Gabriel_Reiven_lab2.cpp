#include <iostream>
using namespace std;

typedefstruct Node{
    string songName;
    Node *link;
}Node;

Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;
    
    return newNode;
    
}

voidtraverse(Node *head){
    Node *temp = new Node;
    temp = head;
    
    cout << "MY PLAYLIST"; << endl;
    while(temp != NULL){
        cout << temp->songName << "-" << endl;
        if(temp->link == NULL){
            cout << "NULL" << endl;
        }
        
        
        temp = temp->link;
    }
}