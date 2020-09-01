#pragma once

class List{

 private:

  typedef struct node{
    int data;
    node* next;
  }* nodePtr;

  nodePtr head;
  nodePtr current;
  nodePtr temp;
  
 public:
  List();
  void addNode(int addData);
  void delNode(int delData);
  void printList();
};
