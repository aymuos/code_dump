import java.util.ArrayList;
import java.util.Scanner;

import java.util.*;
import java.lang.*;
class cwod3_1{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int ids=sc.nextInt();
        int sum=0;
        List<Integer> opt=new ArrayList<Integer>();
        for(int u=0;u<ids;u++){
            int stu=sc.nextInt();
            List<Integer> lst =new ArrayList<Integer>();
            for(int r=0;r<5;r++){
                int e=sc.nextInt();
                lst.add(e);
                sum+=e;
                if(e<35){
                    break;
                }else{
                    opt.add(stu);
                    System.out.println(stu);
                }

            }
        }
        System.out.println(opt);
    }
}