import java.util.*;
import java.lang.*;
class paul{
	public static  void main(String[] args){
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		char c=str.charAt(0);
		int ch=(c);
		if(ch >=97 && ch<=122){
			System.out.print("lower");
		}else if(ch>= 65 && ch<=90){
			System.out.println("UPPER");
		}else if(ch>=48 && ch<=57){
			System.out.println("number");
		}else{
			System.out.println("Symbol");
		}
	}
}
		