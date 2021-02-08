import java.util.Scanner;

class FAIRELECT{

    static int min_arr(int a[],int n){

        int mini=0;
        for(int i=0;i<n;i++){
            if (a[i]<=mini)
                mini=a[i];
        }
        return mini;
    }

    static int max_arr(int a[],int n){

        int max=0;
        for(int i=0;i<n;i++){
            if (a[i]>=max)
                max=a[i];
        }
        return max;
    }

    static void swap(int a,int b){
         a=a+b;
         b=a;
         a=a-b;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int[] arrA = new int[1000000];
        int[] arrB = new int[1000000];
        int sumA=0;
        int sumB=0;
        int count=0;
        for(int i=0;i<t;i++){
            int n=sc.nextInt();
            int m=sc.nextInt();
            for(int j=0;j<n;j++){
                arrA[j]=sc.nextInt();
                sumA+=arrA[j];
            }
            System.out.println(sumA);
            for(int k=0;k<m;k++){
                arrB[k]=sc.nextInt();
                sumB+=arrB[k];
            }
            System.out.println(sumB);
            //inputs taken 
            if(sumA>sumB){
                System.out.println("0");
                System.out.println(sumA+"\n"+sumB);
            }
            while(sumA<sumB){
                swap(min_arr(arrA,n),max_arr(arrB,m));
                count++;
            }

            System.out.println("The count requires is :"+count);



        }
        
    }
}