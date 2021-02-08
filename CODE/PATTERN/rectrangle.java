import java.util.*;
import java.io.*;

class rectrangle {

    static void solid_rectrangle(int m,int n){
        int i, j;

        for (i = 1; i <= n; i++){
            for (j = 1; j <= m; j++){
                    System.out.println("*");
                }
            System.out.println("\n");


            /*
                * * * * * *
                * * * * * *
                * * * * * *
          */

                }
}

static void hollow_rectrangle(int m,int n){
    int i, j;

    for (i = 1; i <= n; i++){
        for (j = 1; j <= m; j++){

            if (i==1 || i==n || j==1 || j==m){
                System.out.println("");
            }
            else { System.out.println("*");}
            }
        System.out.println("\n");

}

    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader itr = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter length & breadth");
        int i= Integer.parseInt(itr.readLine());

        Scanner inq=new Scanner(System.in);

        int j = inq.nextInt();

        c

        

    }


}