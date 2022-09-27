//
// Created by LinYJ on 2022/9/27.
//
#define MaxSize 50
typedef struct SqStack{
    int data[MaxSize];
    int top;
};

void initStack(SqStack& S){
    S.top = -1;
}

bool Push(SqStack& S,int x){
    if(S.top==MaxSize-1)return false;
    S.data[++S.top]=x;
    return true;
}
bool Pop(SqStack& S,int& x){
    if(S.top==-1)return false;
    x = S.data[S.top--];
    return true;
}

bool StackEmpty(SqStack S){
    if(S.top==-1)return true;
    return false;
}

bool FullStack(SqStack S){
    if(S.top==MaxSize-1)return true;
    return false;
}