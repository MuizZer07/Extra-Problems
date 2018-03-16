package abstracts;

public class Circle extends GeometricObj {
	private double radius;
	public Circle() {
		this(0.0);
	}
	public Circle(double r) {
		radius = r;
	}
	public Circle(double r, String color, boolean flag) {
		super(color,flag);
		radius = r;
	}
	
	public void setRadius(double r) {
		radius = r;
	}
	public double getArea() {
		return Math.PI*radius*radius;
	}
	
	public double getDiameter() {
		return 2*radius;
	}
	
	public String toString() {
		return super.toString() + " : Circle object";
	}
	
	public boolean equals(Object obj) {
		if (obj instanceof Circle) {
			return radius == ((Circle) obj).radius;
		} else return false;
	}
	@Override
	public double getPerimeter() {
		// TODO Auto-generated method stub
		return 2*Math.PI*radius;
	}
}
