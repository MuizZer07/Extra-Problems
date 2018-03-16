
package Assignment;

import java.util.Scanner;
public class DemoGrade {
    public static void main(String[] args) {
        Grade[] student = new Grade[3];
        int i;
        double sum=0.0,avg;
        Scanner s = new Scanner(System.in);
        Scanner s1 = new Scanner(System.in);
        
        for(i=0;i<student.length;i++){
            student[i] = new Grade();
            
            System.out.println("Enter Student("+(i+1)+") ID: ");
            String id = s.nextLine();
            if(id.length()>=10) student[i].setID(id);
            else{
             System.out.println("Student's ID is invalid.");  
            }
            
            System.out.println("Enter Student("+(i+1)+") Percentage: ");
            double p = s1.nextDouble();
            student[i].setPercentage(p);
            
            System.out.println("\nStudent("+(i+1)+") ID:"+student[i].getID()+" Grade:"+student[i].CalculateGrade()+"\n");
            
            sum= sum+ student[i].getPercentage();
        }
         avg=sum/student.length;
         System.out.println("Average percentage of all students: "+avg);
    }
}
