import java.util.*;
import java.lang.*;
class FEB21{

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-- >0){
            int n=sc.nextInt();
            List<Integer> st = new ArrayList<Integer>();
            for(int e=0;e<n;e++){
                st.add(sc.nextInt());
            }

            //displaying iterator
            System.out.println("--------Original Input-----------");
            ListIterator itr =st.listIterator();

            while(itr.hasNext()){
                Object elem=itr.next();
                System.out.println(elem+" ");
            }

            Collections.sort(st);
            int max=st.get(st.size()-1);
            int min=st.get(0);
            System.out.println(2*(max-min));



        }
        
    }
}