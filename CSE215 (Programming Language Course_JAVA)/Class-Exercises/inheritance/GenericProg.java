package inheritance;

import java.util.ArrayList;

public class GenericProg {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList list = new ArrayList();
		Circle c = new Circle(1);
		
		list.add(c);
		list.add(0,new Circle(2));
		
		System.out.println(list.size());
		
	}

}
