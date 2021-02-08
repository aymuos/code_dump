public class breakvscontinue {
    public static void main(String args[]){

        // break usage
        for( int i=0;i<20;i++){
            if(i ==7)
                break;
            System.out.println(i);

        }

        // continue 
        for(int j=0;j<20;j++){
            if(j == 12)
                continue;
            System.out.println(j);
        }


    }
    
}
