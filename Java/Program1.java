
import java.util.Scanner;
class Program1 {
    public static void main(String[] args) {
        Scanner scan=new Scanner(System.in);
        int m,n,search,flag=0;
        System.out.println("Enter the dimensions of the matrix");
        m=scan.nextInt();
        n=scan.nextInt();
        int[][] arr=new int[m][n];
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                System.out.printf("Enter the value for position %d %d: ",i,j);
                arr[i][j]=scan.nextInt();
                System.out.println("\n");
            }
        }
        System.out.printf("Enter the search element: ");
        search=scan.nextInt();
        scan.close();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]==search){
                    System.out.printf("%d is present at position %d %d",search,i,j);
                    System.out.println();
                    flag++;
                }
            }
        }
        if(flag==0){
            System.out.printf("%d is not present in the matrix");
        }
    
    }
}