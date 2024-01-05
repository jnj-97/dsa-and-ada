import java.util.Scanner;
class Program4{
    public static void main(String[] args){
        int size,option,head=-1,rear=-1;
        Scanner scan=new Scanner(System.in);
        System.out.println("Enter the size of the queue");
        size=scan.nextInt();
        int[] queue=new int[size];
        do{
            System.out.println("Press 1 for Enqueue, 2 for Dequeue, 3 for peek and 0 to exit the program");
            option=scan.nextInt();
            switch (option) {
                case 1:
                if(head==(size-1)){
                    System.out.println("Queue is Full");
                }
                else{
                    head++;
                    if(head==0){
                        rear++;
                    }
                    System.out.println("Enter the element to enqueue");
                    queue[head]=scan.nextInt();
                }
                    break;
                case 2:
                if(rear==-1){
                    System.out.println("Queue is Empty");
                }
                else{
                    System.out.printf("The dequeued element is %d\n", queue[head]);
                    head--;
                    if(head==-1){
                        rear--;
                    }
                }
                break;
                case 3:
                if(head==-1||rear==-1){
                    System.out.println("Queue is empty\n");
                }
                else{
                    System.out.printf("The head element is %d and the rear element is %d",queue[head],queue[rear]);
                
                }
                break;
                default:
                System.out.println("Invalid input, Exiting program");
                    break;
            }
        }while(option!=0);
    }
}