import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.*;
import java.util.Scanner;

public class F1RULE {
    public static void main(String args[]) throws NumberFormatException, IOException{
        Scanner sc=new Scanner(System.in);
        //BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        //int t=Integer.parseInt(br.readLine());
        int t=sc.nextInt();
        for(int i=0;i<t;i++){
            //int a=Integer.parseInt(br.readLine()).intValue();
            //int b=Integer.parseInt(br.readLine()).intValue();
            int a=sc.nextInt();
            int b=sc.nextInt();
            //System.out.println(a+":"+a.getCLass().getSimpleName()+"|"+b+":"+b.getClass().getSimpleName());
            //System.out.println((a*107) +"|"+(b*100));
            if((a*107)>(b*100))
                System.out.println("YES");
            else
                System.out.println("NO");
        }
        
    }
    
}
