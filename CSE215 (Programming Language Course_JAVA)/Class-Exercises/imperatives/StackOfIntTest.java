package imperatives;

public class StackOfIntTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//BMI b = new BMI("Sabuj",110.0,65.0);
		
		Stack<Integer> s = new Stack<Integer>();
		s.push(5);
		s.push(7);
		
		System.out.println(s.empty());
		System.out.println(s.pop());
		System.out.println(s.getSize());
		System.out.println(s.pop());
	}

}
