package imperatives;

public class ArraySearchTest {

	/**
	 * @param args
	 */
	
	public static void selectionSort(int[] list) {
		int m, t;		
		for (int i=0; i<list.length; i++) {
			m = i;
			for (int j=i+1; j<list.length; j++) {
				if (list[m]>list[j]) m = j;
			}
			// swap(i,m);
			t = list[i];
			list[i] = list[m];
			list[m] = t;
		}
	}
	
	public static boolean searchList(int[] list, int key) {
		for (int x:list) {
			if (x==key) return true;
		}
		return false;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] m = {51,7,9,11,22,23};
		
		if (searchList(m,121)) 
			System.out.println("It's in the list");
		else System.out.println("It's NOT in the list"); 
		
		selectionSort(m);
		
		for (int i=0; i<m.length; i++) 
			System.out.print(m[i] + "  ");		
		
	}

}
