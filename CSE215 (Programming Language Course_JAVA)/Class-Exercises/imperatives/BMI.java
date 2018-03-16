package imperatives;

public class BMI {
	private String name;
	private int age;
	private double weight;
	private double height;
	
	public BMI(String s, double w, double h) {
		//name = s; age = 20; weight = w; height = h;
		this(s,20,w,h);
	}
	
	public BMI(String s, int a, double w, double h) {
		name = s; age = a; weight = w; height = h;
	}
	
	public double getBMI() {
		double bmi = (weight*0.453) / ((height*0.0254)*(height*0.0254));
		return bmi;
	}
	
	String getStatus() {
		double bmi = getBMI();
		if (bmi<16) return "Seriously Underweight";
		else if (bmi<18) return "Underweight";
		else if (bmi<24) return "Normal Weight";
		else if (bmi<29) return "Overweight";
		else if (bmi<35) return "Seriously Overwieight";
		else return "Gravely Overweight";
	}	
	
	public String toString() {
		return name + ", age = " + age + ", Status = " + getStatus();
	}	
}
