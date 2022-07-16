import java.lang.*;
import java.util.*;
class PRIZEPOOL{
  public static void main(String args[]){
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    int t =Integer.parseInt(br.readLine());
    for(int i=0;i<t;i++){
      int a=Integer.parseInt(br.readLine());
      int b=Integer.parseInt(br.readLIne());
      int sum = (a*10) + (b*90);
      System.out.println(sum);
    }


  }
}
