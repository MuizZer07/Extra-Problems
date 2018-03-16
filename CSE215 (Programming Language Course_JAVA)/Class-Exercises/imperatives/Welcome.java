package imperatives;

public class Welcome {	
	public static void main(String[] args) {
		System.out.println("Welcome to Java");	
		int n = 3;
		int list[][] = new int[n][];

		for (int i=0; i<n; i++) {
			list[i] = new int[i+1];
		}
	}
}
