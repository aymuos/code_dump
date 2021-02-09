import java.util.*;
import java.lang.*;
class compare_triplets{
    public static void main(String[] args) {
        int alice=0,bob=0;
        List<Integer> a=new ArrayList<Integer>();
        List<Integer> b=new ArrayList<Integer>();
        Scanner sc=new Scanner(System.in);
        for(int i=0;i<=2;i++){
            a.add(sc.nextInt());
        }
        for(int i=0;i<=2;i++){
            b.add(sc.nextInt());
        }
        for(int i=0;i<=2;i++){
            if(a.get(i)> b.get(i)){
                alice++;
            }else if(a.get(i)<b.get(i)){
                bob++;
            }
    
        }
        System.out.println(alice+" "+bob);
        
        
        
        
        
    }
}