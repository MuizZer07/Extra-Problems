
package Assignment;
import java.util.Scanner;

public class DemoQuiz {
    public static void main(String[] args) {
        QuizScript[] q = new QuizScript[3];
        Scanner s =  new Scanner(System.in);
        Scanner p =  new Scanner(System.in);
        int i;
        
        System.out.println("Enter total number of the quiz: ");
        double total = s.nextDouble();
        int pass = (int)(total*60)/100;
        
        for(i=0;i<q.length;i++){
            q[i] = new QuizScript();
            
            System.out.println("Enter Student("+(i+1)+") ID: ");
            String id = p.nextLine();
            q[i].setID(id);
            
            System.out.println("Enter Student("+(i+1)+") marks: ");
            double marks = s.nextDouble();
            q[i].setMarks(marks);
            q[i].setTotal(total);
            
           if(marks>=pass) q[i].setPass(true);
           else q[i].setPass(false);
        
           
           if(i==q.length-1)  q[i].maxQuizScript(q);
           
        }
        
    }
}
