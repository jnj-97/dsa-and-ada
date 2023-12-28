import java.util.Scanner;

import javax.sound.midi.SysexMessage;
class Program2{
    public static void main(String[] args){
        Scanner scan=new Scanner(System.in);
        int length,width,operation;
        System.out.println("Please Enter the length of the arrays");
        length=scan.nextInt();
        System.out.println("Please enter the width of the arrays");
        width=scan.nextInt();
        int[][] array2=new int[length][width];
        int[][] array1=new int[length][width];
        int[][] output=new int[length][width];
        for(int i=0;i<length;i++){
            for(int j=0;j<width;j++){
                System.out.printf("Please enter the value of Matrix 1 at position %d %d: ",i,j);
                array1[i][j]=scan.nextInt();
                System.out.println("\n");
            }
        }
        for(int i=0;i<length;i++){
            for(int j=0;j<width;j++){
                System.out.printf("Please enter the value of Matrix 2 at position %d %d: ",i,j);
                array2[i][j]=scan.nextInt();
                System.out.println("\n");
            }
        }
        do{
            System.out.println("Press 1 for Addition, 2 for Subtraction and 3 for Multiplication. Press 0 to exit the program");
            operation=scan.nextInt();
            for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            output[i][j]=0;
                        }
                    }
            switch (operation) {
                case 1:
                    for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            output[i][j]=array1[i][j]+array2[i][j];
                        }
                    }
                    for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            System.out.printf("The value of the Resultant position at %d %d is: %d",i,j,output[i][j]);
                            System.out.println("\n");
                        }
                    }
                    break;
                case 2:
                    for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            output[i][j]=array1[i][j]-array2[i][j];
                        }
                    }
                    for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            System.out.printf("The value of the Resultant position at %d %d is: %d",i,j,output[i][j]);
                            System.out.println("\n");
                        }
                    }
                    break;
                case 3:
                for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            output[i][j]=0;
                            for(int k=0;k<width;k++){
                                output[i][j]+=array1[i][k]*array2[k][j];
                            }
                        }
                    }
                    for(int i=0;i<length;i++){
                        for(int j=0;j<width;j++){
                            System.out.printf("The value of the Resultant position at %d %d is: %d",i,j,output[i][j]);
                            System.out.println("\n");
                        }
                    }
                    break;
                default:
                    break;
            }
        }while(operation!=0);

    }
}