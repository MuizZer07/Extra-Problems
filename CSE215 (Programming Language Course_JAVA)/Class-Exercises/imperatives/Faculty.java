package imperatives;
class Person {
	String name;
	public Person()  {
		System.out.println("Contructor of Person");
	}
	public Person(String t)  {
		System.out.println("Contructor of Person");
	}
}

class Employee extends Person {
	String designation;
	double salary;
	
	public Employee() {		
		this("Entry Level");
	}
	
	public Employee(String designation) {
		super();
		this.designation = designation;
		salary = 10000.0;
		System.out.println("Contructor of Employee 1 param");
	}
	
	public Employee(String d, double salary) {
		designation = d;
		this.salary = salary;
		System.out.println("Contructor of Employee 2 param");
	}
}
public class Faculty extends Employee {

	public Faculty() {		
		System.out.println("Constructor of faculty");
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Faculty f = new Faculty();
	}

}
