import java.io.*;
import java.util.*;
public class very_big_sum {
     
  public static void main(String[] args) {
      Scanner sc=new Scanner(System.in);
        List<Long> fr= new ArrayList<Long>();
        int n=sc.nextInt();
        long result=0;
        for(int i=0;i<n;i++){
            long t=sc.nextLong();
            result+=t;

        }
        System.out.println(result);
  }  
}
