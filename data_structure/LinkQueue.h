//
// Created by LinYJ on 2022/9/27.
//
#include <iostream>

typedef struct LinkNode{
    int data;
    LinkNode *next;
};
typedef struct LinkQueue{
    LinkNode *front,*rear;
};

void InitLinkQueue(LinkQueue& Q){
    Q.front = Q.rear = (LinkNode*) malloc(sizeof(LinkNode));
}

void EnQueue(LinkQueue& Q,int x){
    LinkNode* Node = (LinkNode*) malloc(sizeof (LinkNode));
    Node->data = x;
    Node->next = nullptr;
    Q.rear->next = Node;
    Q.rear = Node;
}

bool DeQueue(LinkQueue& Q,int x){
    if(Q.front == Q.rear) return false;
    LinkNode* p;
    p = Q.front->next;
    x = p->data;
    if(p==Q.rear) Q.rear = Q.front;
    Q.front->next = nullptr;
    free(p);
    return true;
}

bool QueueEmpty(LinkQueue& Q){
    if(Q.front == Q.rear) return ture;
    return false;
}