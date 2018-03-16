package imperatives;
import java.util.Scanner;

public class ComputeArea {	
	public static void main(String[] args) {
		double radius, area;
		Scanner stdin = new Scanner(System.in);		
		System.out.print("Our New Program:\n");		
		System.out.println("Enter radius of the circle:");
		radius = stdin.nextDouble();
		area = radius * radius * 3.14159; 
		System.out.println("The area of the circle is: " + area);
	}
}
