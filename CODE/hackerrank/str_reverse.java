import java.util.*;
import java.lang.*;
class str_reverse{
   public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        String str=sc.nextLine();
        char[] t=str.toCharArray();
        int start=0;
        int end=t.length-1;
        System.out.println("sTr is " + str);
       while(start<end){
            System.out.println("swapping"+t[start]+" and "+t[end]);
            swap(t,start,end);
            start++;
            end--;

        }
        for(char y:t){
            System.out.println(y);
        }
        String stw=new String(t);
        System.out.println(stw + "+++"+str);
        if ((str.compareTo(stw)==0)){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
        System.out.println(stw);
        
    }

     static void swap(char[] p, int a,int b){
        
        char t= p[a];
        p[a]=p[b];
        p[b]=t;
    }
}