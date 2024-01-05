#include<stdio.h>
int main(){
    int n,output,head=-1,rear=-1;
    printf("Enter the size of the queue\n");
    scanf("%d",&n);
    int queue[n];
    do{
        printf("\n Press 1 for enqueue, 2 for dequeue, 3 for peek and 0 to exit the program\n");
        scanf("%d",&output);
        switch(output){
            case 1:
            if(head==(n-1)){
                printf("Queue is full");
                }
            else{
                printf("Enter the element to enqueue\n");
                head++;
                if (head==0){
                    rear++;
                }
                scanf("%d",&queue[head]);
            }
            break;
            case 2:
            if(rear==-1){
                printf("Queue is empty\n");
            }
            else{
                printf("The dequeued element of the queue is %d",queue[head]);
                head--;
                if(head==-1){
                    rear--;
                }
            }
            break;
            case 3:
            if(rear==-1){
                printf("Queue is empty\n");
            }
            else{
                printf("The first element is %d and the last element is %d",queue[rear],queue[head]);
            }
            break;
        }
    }while(output!=0);
    return 0;
}