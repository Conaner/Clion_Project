#include <iostream>
#define MaxSize 50

typedef struct SqQueue{
    int data[MaxSize];
    int front,rear;
};

void InitQueue(SqQueue& Q){
    Q.front = Q.rear = 0;
}

bool Enqueue(SqQueue& Q,int x){
    if((Q.rear+1)%MaxSize == Q.front) return false;    //不使用一个单元来进行判满
    Q.data[Q.rear]=x;
    Q.rear = (Q.rear+1)%MaxSize;
    return true;
}

bool DeQueue(SqQueue& Q,int x){
    if(Q.rear==Q.front) return false;  //队空
    x = Q.data[Q.front];
    Q.front = (Q.front+1)%MaxSize;
    return true;
}

bool QueueEmpty(SqQueue Q){
    if(Q.front==Q.rear) return true;
    return false;
}

//bool