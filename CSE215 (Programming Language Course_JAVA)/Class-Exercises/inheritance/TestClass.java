package inheritance;

public class TestClass {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GeometricObj obj = new Circle(1);
		
		((Circle)obj).getArea();
	}

}
