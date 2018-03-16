
package Assignment;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner n = new Scanner(System.in);
        Scanner m = new Scanner(System.in);
        Teacher t = new Teacher();
        Student s = new Student(); 
        
        System.out.println("Enter (1)Teacher Details: (2)Student Details:");
        int n1= n.nextInt();
        
        switch(n1){
            case 1: 
                System.out.print("Name: ");
                t.setName(m.nextLine());
                System.out.print("Adderss: ");
                t.setAddress(m.nextLine());
                int i;
                
                for(i=0;i!=80;i++){
                System.out.print("Enter (1)Add course (2)Remove course (3)Cancel :");
                int n2 = n.nextInt();
                
                    switch(n2){
                        
                        case 1:
                            System.out.print("Enter Course name to add: ");
                            t.addCourse(m.nextLine());
                            break;
                        case 2: 
                            System.out.print("Enter Course name to remove: ");
                            t.removeCourse(m.nextLine());
                            break;
                        case 3:
                            System.out.print("Cancelled. ");
                            i=80-1;
                            break;
                    }
                }
                System.out.println("Teacher Details: "+t.toString()); 
                break;
                
            case 2: 
                System.out.print("Name: ");
                s.setName(m.nextLine());
                System.out.print("Adderss: ");
                s.setName(m.nextLine());
                
                int j;
                
                for(j=0;j!=80;j++){
                System.out.print("Enter (1)Add course & Grade (2)Cancel :");
                int n2 = n.nextInt();
                
                    switch(n2){
                        
                        case 1:
                            System.out.print("Enter Course name and Grade: ");
                            s.addCourseGrade(m.nextLine(), n.nextDouble());
                             break;
                      
                        case 2:
                            System.out.print("Cancelled. ");
                            j=80-1;
                            break;
                    }
                }
                System.out.println("\nStudent Details: "+s.toString());
                s.printGrades();
                break;
        }
        
        
    }
}
