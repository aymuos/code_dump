import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;
public class cf2 {

    public static void main(String[] args) {
        BufferedReader inp=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(inp.readLine());

        if((t%4)==0){
            t=t+1;
        }else{
            t=t-1;
        }
        System.out.println(t);
        
    }
    
}
