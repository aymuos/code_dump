import java.util.*;
import java.io.*;
class strings_intro{
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        String B=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int y=A.length()+B.length();
        System.out.println(y);
        if((A.compareTo(B))>0){
            System.out.println("Yes");
            
        }else{
            System.out.println("No");
        }
        
        String stre=A.substring(0,1)+A.substring(1)+" "+B.substring(0,1)+B.substring(1);
        System.out.println(stre);
    }

}