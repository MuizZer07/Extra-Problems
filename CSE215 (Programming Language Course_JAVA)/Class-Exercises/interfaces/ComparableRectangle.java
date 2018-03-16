package interfaces;

import inheritance.Rectangle;

public class ComparableRectangle extends Rectangle implements Comparable {
	/** Construct a ComparableRectangle with specified properties */
	public ComparableRectangle(double width, double height) {
		super(width, height);
	}
	
	/** Implement the compareTo method defined in Comparable */
	public int compareTo(Object o) {
		if (getArea() > ((ComparableRectangle)o).getArea())
		  return 1;
		else if (getArea() < ((ComparableRectangle)o).getArea())
		  return -1;
		else
		  return 0;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ComparableRectangle r1 = new ComparableRectangle(3, 2);
		ComparableRectangle r2 = new ComparableRectangle(3, 2);
		
		System.out.println(r1.compareTo(r2));
	}
}