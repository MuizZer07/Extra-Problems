package inheritance;

public class Person extends Object {
	private String idNumber;
	private String name;
	private String gender; // M or F
	private String address;
	private String phoneNumber;
	private String country;
		
	public Person() {}
	public Person(String idNumber, String name, String gender) {
		this.idNumber = idNumber;
		this.name = name;
		this.gender = gender;
	}
	
	protected void setName(String name) {
		this.name = name;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	
	public void setPhoneNumber(String phoneNumber) {
		this.phoneNumber = phoneNumber;
	}
	
	public void setCountry(String country) {
		this.country = country;
	}
	
	public void displayInfo() {
		System.out.println("id: " + idNumber + ", Name: " + name + ", Gender: " + gender);
		System.out.println("Address: " + address + ", " + country);
		System.out.println("Phone Number: " + phoneNumber);
		
	}
	
	public String toString() {
		return "Person: ***";
	}
}
