package abstracts;

public class TestClass {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Circle c = new Circle(2.5);
		Rectangle r = new Rectangle(23,12);
		
		GeometricObj obj = c;
		
		obj.getArea();		
	}

}
