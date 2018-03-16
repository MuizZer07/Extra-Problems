package imperatives;

public class ArraysTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] list = new int[10];
		int sum = 0;
		
		for (int i=0; i<list.length; i++) {
			list[i] = (int)(Math.random()*100);			
			System.out.print(list[i] + " ");
			sum += list[i];
		}		
		
		int m = 0;		
		for (int i=0; i<list.length; i++) {
			if (list[m]>list[i]) m = i;
		}		
		System.out.print("\nSmallest Element = " + list[m]);
		System.out.print("\nPostion = " + (m+1));
		
		
		//System.out.printf(" = %d%n", sum);		
		
	}
}
