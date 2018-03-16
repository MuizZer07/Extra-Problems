package exception;

import inheritance.Student;

import java.util.Scanner;
import java.util.Set;

public class Quotient {
	double radius;
	
	public void setRadius(double r) throws IllegalArgumentException {
		if (r>=0) radius = r;
		else {
			IllegalArgumentException x = 
					new IllegalArgumentException("Negative Radius");
			throw x;
		}
	}
	
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a;
		int b;
		int[] m = new int[20];
		Student s = null;
		Quotient q = new Quotient();
		
		/*
		Scanner in = new Scanner(System.in);		
		a = in.nextInt();
		b = in.nextInt();		
		
		try {
			System.out.println(a/b);
			System.out.println(m[a]);
			//s.displayInfo();
		} catch (ArithmeticException e1) {
			System.out.println("1. Exception Occurs: " + e1);
		} catch (ArrayIndexOutOfBoundsException e2) {
			System.out.println("2. Exception Occurs: " + e2);
		} catch (Exception e) {
			System.out.println("x. Exception Occurs: " + e);
		}*/
		
		try {
			q.setRadius(-5);
		} catch (IllegalArgumentException e) {
			System.out.println("Test: " + e);
		}
	}

}
