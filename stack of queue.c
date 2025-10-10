#include <stdio.h>
#include <stdlib.h>
# define SIZE 10

struct queue
{
    int r,f;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item)
{
    if(q->r==SIZE-1)
        printf("\n queue empty");
    else
    {
        q->data[++(q->r)]=item;
        if(q->f==-1)
            q->f=0;
    }
}
void dequeue(QUEUE *q)
{
    if(q->f==-1)
    printf("\n queue empty");
    else {
        printf("\n theelement deleted is %d ",q->data[q->f]);
        if(q->f==q->r)
        {
            q->f=-1;
            q->r=-1;
        }
        q->f+=1;
    }

}
void display(QUEUE q)
{

    int i;
    if(q.f==-1)
        printf("\n queue empty");
    else{
        printf("\n queue element are:");
        for(i=q.f;i<=q.r;i++)
            printf("\n %d",q.data[i]);
    }
}
int main()
{
    int ch,item;
    QUEUE q;
    q.f=-1;
    q.r=-1;
    for(;;)
    {
        printf("\n 1.insert to queue\n2.delet from queue\n3.display queue\n 4.exit");
        printf("\n enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("\n enter the item to insert:");
            scanf("%d",&item);
            enqueue(&q,item); break;
        case 2:
            dequeue(&q);break;
        case 3:
            display(q);break;
        default :
            exit(0);
        }
    }
    return 0;
}
