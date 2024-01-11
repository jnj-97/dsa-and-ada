import java.util.Scanner;

class Program5{
    public int partition(int arr[], int low,int high){
            int pivot=arr[high];
            int i=low-1;
            for(int j=low;j<high;j++){
                if(arr[j]<pivot){
                    i++;
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
            int temp=arr[i+1];
                arr[i+1]=pivot;
                arr[high]=temp;
            return i+1;
        }
    public void quicksort(int arr[],int low,int high){
        
        if(low<high){
             int pivot=partition(arr, low, high);
             quicksort(arr, low, pivot-1);
             quicksort(arr, pivot, high);
        }
    }

    public static void main(String[] args) {
        int size;
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        size = scan.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter the elements of the Array");
        for (int i = 0; i < size; i++) {
            System.out.printf("Enter the element for position %d: ", i);
            arr[i] = scan.nextInt();
        }
        Program5 program = new Program5();
        program.quicksort(arr, 0, arr.length - 1);
        System.out.println("The sorted array is: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("%d\t", arr[i]);
        }
    }
    
}