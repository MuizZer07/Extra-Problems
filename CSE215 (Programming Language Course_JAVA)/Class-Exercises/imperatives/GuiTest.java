package imperatives;
import javax.swing.JOptionPane;


public class GuiTest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		//String str = JOptionPane.showInputDialog("Enter Input");
		String str = JOptionPane.showInputDialog(null,
				"Enter the radius", "CSE 135", JOptionPane.QUESTION_MESSAGE);
		//int i = Integer.parseInt(str);		
		//i = i * 3;
		double r = Double.parseDouble(str);	
		double area = Math.PI*Math.pow(r, 2);
		//char k = str.charAt(0);				
		JOptionPane.showMessageDialog(null, "Area = " + area);
	}

}
