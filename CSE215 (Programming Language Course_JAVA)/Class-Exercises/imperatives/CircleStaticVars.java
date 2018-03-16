package imperatives;

public class CircleStaticVars {
	double radius;
	static int serialNum = 0;
	private int p = 12;
	public int q = 13;
	int r = 14;
		
	static void displayName() {
		System.out.println("This a Circle class");		
	}
	
	CircleStaticVars() {
		serialNum = serialNum + 1;
	}	
	
	CircleStaticVars (double newRadius) {
		radius = newRadius;
		serialNum = serialNum + 1;
	}	
	
	void setRadius(double r) {
		radius = r;
	}	
	double getArea() {
		return 3.14159*radius*radius;
	}
	
	double getDiameter() {
		return 2*radius;
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		CircleStaticVars a = new CircleStaticVars();
		
		CircleStaticVars[] list = new CircleStaticVars[3];
		
		list[0] = new CircleStaticVars();
				
		a.p = 10;
		
		
		CircleStaticVars.displayName();
		
		System.out.printf("Number of Circle created: %d", CircleStaticVars.serialNum);
		
	}

}
