package inheritance;

public class TestPerson {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		int a = 10;
		
		Person p1 = new Person();
		Person p2 = new Person("123", "Shuva", "M");
		
		p1 = new Person("234", "Olinda", "M");
				
		p2.setAddress("Dhaka Cantonment");
		p2.setPhoneNumber("01914567843");
		p2.setCountry("Bangladesh");
		
		//p1.displayInfo();
		
		Person[] q = new Person[3];
		
		q[0] = new Person("1", "A", "M");
		q[1] = new Person("2", "B", "F");
		q[2] = p2;
		
		q[1].setAddress("Bashundhara");
		q[2].setAddress("Gulshan");
		
		q[1].displayInfo();
		q[2].displayInfo();
		
		System.out.println(p2.toString());
		
		Student s = new Student("2345", "ABC", "NSU");
		s.setProgramName("CSE");
		s.displayInfo();
		
	}

}
