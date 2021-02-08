class atcoder{
    public static void main(String args[]){
     Scanner sc=new Scanner(System.in);
      String str=sc.nextLine();
      char a;
      for(int i=0;i<str.length();i++){
          a=str.charAt(0);
          if (str.charAt(i)==a){
              System.out.println("Lost");
              break;
          }
          else
            continue;
      }
      System.out.println("Won");
    }
    }