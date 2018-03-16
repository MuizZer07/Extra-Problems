package inheritance;

public class Student extends Person {
	private String studentID;
	private String institution;
	private double cgpa;
	private String programName;
	
	Student() {}
	Student(String studentID, String name, String institution) {
		super.setName(name);
		this.studentID = studentID;
		this.institution = institution;
	}
	
	public void setCgpa(double cgpa) {
		this.cgpa = cgpa;
	}
	
	public void displayInfo() {
		super.displayInfo();
		System.out.println("\n" + programName + ", " + institution);
	}
	
	public void setProgramName(String programName) {
		this.programName = programName;
	}
	
	public String toString() {
		return "Student";
	}
}
