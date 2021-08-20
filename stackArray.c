#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{

    printf("\nEnter the size of the stack\n");
    scanf("%d",&st->size);
    st->top=-1;
    st->s=(int*)malloc(st->size*sizeof(int));
}
void push(struct stack *st,int element)
{
    if(st->top==st->size-1)
        printf("\nStack Overflow\n");
    else
    {
        st->top++;
        st->s[st->top]=element;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("\nStack Underflow\n");
    else
    {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int peak(struct stack *st,int pos)
{
    int x=-1;
    if(pos<0)
        printf("\nInvalid Index given\n");
    else
    {
      x=st->s[st->top-pos+1];
    }
    return x;
}
int stackTop(struct stack st)
{
    if(st.top==-1)
        return -1;
    else
        return st.s[st.top];
}
int isFull(struct stack st)
{
    if(st.size-1==st.top)
        return 1;
    else
        return 0;
}
int isEmpty(struct stack st)
{
    if(st.top==-1)
    return 1;
    else
        return 0;
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d\n",st.s[i]);
    }
}
int main()
{
    struct stack st;
    create(&st);
    push(&st,1);
    push(&st,2);
    push(&st,3);
    push(&st,4);
    push(&st,5);
    printf("%d\n\n",isEmpty(st));
    display(st);
    return 0;
}
