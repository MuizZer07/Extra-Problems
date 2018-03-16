package interfaces;

import inheritance.Circle;

public class TestClone {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[] a = {1,6,9};
		int[] b = a.clone();
		
		for (int x:b) System.out.println(x);
				
		System.out.println(a==b);
		
		House g = new House(1,23.56);
		House h = (House) g.clone();
					
		System.out.println(g.compareTo(h));		
	}

}
