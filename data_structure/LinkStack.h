//
// Created by LinYJ on 2022/9/27.
//
#include <iostream>
typedef struct LNode{
    int data;
    LNode* next;
}*LinkStack;

void InitStack(LinkStack& S){
    S = (LNode*)malloc(sizeof (LNode));
    S->next = nullptr;
}

void Push(LinkStack& S,int x){
    LNode* N = (LNode*) malloc(sizeof (LNode));
    N->data = x;
    N->next =S->next;
    S->next = N;
}

bool Pop(LinkStack& S,int& x){
    if(S->next==NULL)return false;
    LNode *p;
    p = S->next;
    S->next = p->next;
    x = p->data;
    free(p);
    return true;
}

bool StackEmpty(LinkStack S){
    if(S->next==NULL)return true;
    return false;
}