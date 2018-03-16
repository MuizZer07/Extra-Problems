package imperatives;

public class TwoDArrays {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[][] z = {{5,7,2},{2,5,8},{9,2,7}};
		
		for (int i=0; i<z.length; i++) {
			int sum = 0;
			for (int j=0; j<z[i].length; j++) {
				sum += z[i][j];				
			}
			// largest sum and row_number
			System.out.printf("Sum of Row %d: %d%n", i+1, sum);
		}
		
		for (int j=0; j<z[0].length; j++) {
			int sum = 0;
			for (int i=0; i<z.length; i++) {
				sum += z[i][j];				
			}
			System.out.printf("Sum of Col %d: %d%n", j+1, sum);
		}
	}

}
