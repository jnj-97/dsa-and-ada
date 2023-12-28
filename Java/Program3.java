import java.util.Scanner;
class Program3{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int head=-1,options,size;
        System.out.println("Please enter the size of the stack");
        size=scan.nextInt();
        int[] stack=new int[size];
        do{
            System.out.println("Press 1 for Push, 2 for Pop, 3 for peek, 4 for isFull, 5 for isEmpty, and 0 to exit the program");
            options=scan.nextInt();
            switch (options) {
                case 1:
                    if(head==(size-1)){
                        System.out.println("Stack is full");
                    }
                    else{
                        int temp;
                        System.out.println("Please enter the element to push");
                        temp=scan.nextInt();
                        head++;
                        stack[head]=temp;
                    }
                    break;
                case 2:
                    if(head==-1){
                        System.out.println("Stack is empty");
                    }
                    else{
                        System.out.printf("\nThe popped element is %d\n",stack[head]);
                        head--;
                    }
                    break;
                case 3:
                if(head==-1){
                    System.out.println("Stack is empty");
                }
                else{
                    System.out.printf("The head element is %d",stack[head]);
                }
                break;
                case 4:
                if(head==(size-1)){
                    System.out.println("Stack is full");
                }
                else{
                    System.out.println("Stack is not full");
                }
                break;
                case 5:
                if(head==-1){
                    System.out.println("Stack is empty");
                }
                else{
                    System.out.println("Stack is not empty");
                }
                break;
                case 0:
                System.out.println("Exiting program");
                break;
                default:
                System.out.println("Invalid Input. Exiting program");
                break;
            }
        }while(options!=0);
        
    }
}