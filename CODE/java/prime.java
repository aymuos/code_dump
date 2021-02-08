import java.util.Scanner;

public class prime {
    public static void main(String args[]){
        System.out.println("Enter the number");
        Scanner scr=new Scanner(System.in);
        int n=scr.nextInt();
         int p;

        for(int i=2;i<=n;i++){
            if(n%i==0){
                System.out.println("Prime");
                p=1;
                break;}
            }
            
              if(p!=1)
                System.out.println(n+"non-Prime");
    }
    
}
