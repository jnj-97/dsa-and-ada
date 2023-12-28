#include <stdio.h>
int main(){
    int size,option,head=-1;
    printf("Please Enter the size of the stack: ");
    scanf("%d",&size);
     int st[size];
    do{
        printf("\nEnter 1 for Push, 2 for Pop, 3 for peek, 4 for isFull, 5 for isEmpty, and 0 to exit the program\n");
        scanf("%d",&option);
       
        switch(option){
            case 1:
            if(head==(size-1)){
                printf("\nStack is full");
                break;
            }
            else{
                int temp;
                printf("\nEnter the element to push");
                scanf("%d",&temp);
                head++;
                st[head]=temp;
                  
                break;
            }
            case 2:
            if(head==-1){
                printf("\nStack is empty");
                break;
            }
            else{
                printf("The popped element is %d",st[head]);
                head--;
                break;
            }
            case 3:
            if(head==-1){
                printf("\nStack is empty");
                break;
            }
            else{
                
                printf("\nThe head element is %d",st[head]);
                break;
            }
            case 4:
            if(head==(size-1)){
                printf("\nStack is full");
                break;
            }
            else{
                printf("\nStack is not Full");
                break;
            }
            case 5:
            if(head==-1){
                printf("\nStack is empty");
                break;
            }
            else{
                printf("\nStack is not empty");
                break;
            }
            case 0:
            printf("\nExiting the program");
            break;

            default:
            printf("\nInvalid input. Exiting Program");
        }

    }while(option!=0);
    return 0;
}