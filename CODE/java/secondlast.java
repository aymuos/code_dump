import java.util.Scanner;

class secondlast{
    public static void main(String args[]){
        System.out.println("Enter the  number : ");
        Scanner scr= new Scanner(System.in);
        int num= scr.nextInt();
        int length=(int)(Math.log10(num)+1);
        int y=0;
        if(length<2){
            return ;
        }else {

            for(int i=0;i<2;i++){
                 y=num%10;
                num=num/10;
            }
            System.out.println("tHE 2ND LAST DIGIT IS :");
            System.out.println(y);


        }

    }
}