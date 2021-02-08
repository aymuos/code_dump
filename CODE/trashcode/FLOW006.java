import java.util.*;
public class FLOW006 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int y=sc.nextInt();
        int sum=0;
        for(int r=0;r<y;r++){
            int e=sc.nextInt();
            while(e>0){
                int f=e%10;
                sum=sum+f;
                e=e/10;

            }
            
            System.out.println(sum);
            sum=0;
        }
    }
    
}
