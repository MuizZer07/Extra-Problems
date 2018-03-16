package inheritance;

public class Employee extends Person {
	private String employeeID;
	private String designation;
	private double basicSalary;
	
	Employee() {}
	
	Employee(String employeeID, String designation) {
		this.employeeID = employeeID;
		this.designation = designation;
	}
	
	public void setBasicSalary(double basicSalary) {
		this.basicSalary = basicSalary;
	}
}
