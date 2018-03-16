package imperatives;
import java.util.Scanner;


public class Fibonacci {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		
		if (n<0) {
			System.out.println("Invalid value of n");
		} else if (n>=0 && n<=1) {
			System.out.printf("F(%d) = %d",n,n);
		} else {
			int a = 0;
			int b = 1;			
			int c = 0;
								
			for (int i=2; i<=n; i++) {
				c = a + b;
				a = b; 
				b = c;
			}
			System.out.printf("F(%d) = %d",n,c);
		} 		
	}

}
