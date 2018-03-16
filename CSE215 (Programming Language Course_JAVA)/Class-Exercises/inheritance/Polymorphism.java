package inheritance;

import java.util.Scanner;

class GraduateStudent extends Student {
	public String toString() {
	    return "Graduate " + super.toString();
	}
}

public class Polymorphism {
	public static void main(String[] args) {		
		Object obj;
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a number to select object: ");
		int i = input.nextInt();
		switch (i) {
			case 1: obj = new GraduateStudent(); break;
			case 2: obj = new Student(); break;
			case 3: obj = new Person(); break;
			default: obj = new Object(); break;
		}				
		System.out.println(obj.toString());
	  }	  
}