package inheritance;

public class GeometricObj {
	private String color;
	private boolean filled;
	
	public GeometricObj() {
		this("No Color", false);		
	}
	public GeometricObj(String c, boolean flag) {
		color = c;
		filled = flag;
	}
	
	public String getColor() {
		return color;
	}
	
	public boolean isFilled() {
		return filled;
	}
	
	public String toString() {
		return "Geometric Object";
	}
}
