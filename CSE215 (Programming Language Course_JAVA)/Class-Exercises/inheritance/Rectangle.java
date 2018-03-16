package inheritance;

public class Rectangle extends GeometricObj {
	private double width;
	private double height;
	
	public Rectangle() {
		width = height = 0;
	}
	public Rectangle(double w, double h) {
		width = w;
		height = h;
	}
	
	public Rectangle(double w, double h, String c, boolean flag) {
		super(c,flag);
		width = w;
		height = h;
	}
	
	public double getArea() {
		return width*height;
	}
	
}
