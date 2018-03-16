package imperatives;
import java.util.Scanner;

public class GuessingNumber {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int randomNumber = (int) (Math.random()*11);
		int userNumber;
		
		Scanner stdin = new Scanner(System.in);
		System.out.println("Enter a number between 0 and 10");
		/*
		int count = 0;
		while (count <10) {
			System.out.println(Math.random());
			count++;
		}*/
		
		int a[] = {1,3,5,7};
		
		for (int i:a) {
			System.out.println(i);
		}
		
		System.exit(0);
		
		while (true) {
			userNumber = stdin.nextInt();			
			if (userNumber>randomNumber) {
				System.out.println("Your number is high");
			} else if (userNumber<randomNumber) {
				System.out.println("Your number is low");
			} else {
				System.out.println("You are correct");
				break;
			}			
		}		
	}

}
