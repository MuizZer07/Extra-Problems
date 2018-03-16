package imperatives;

public class PrimeTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 1;		
		int m = (int) Math.sqrt(n);
		boolean isPrime = true;
		
		if (n==1) isPrime = false;
		else {
			for (int i=2; i<=m && isPrime; i++) {
				if (n%i==0) isPrime = false;
				//break;
			}
		}
		if (isPrime==true) System.out.printf("%d is Prime%n", n);
		else System.out.printf("%d is NOT Prime%n", n);
	}

}
