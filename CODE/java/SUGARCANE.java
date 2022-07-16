import java.io.*;
import java.lang.*;
import java.util.Scanner;

public class SUGARCANE {
public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int a;
    int t=sc.nextInt();
    for(int i=0;i<t;i++){
        a=sc.nextInt();
        System.out.println(Math.round(0.3*50*a));
    }
}
    
}
