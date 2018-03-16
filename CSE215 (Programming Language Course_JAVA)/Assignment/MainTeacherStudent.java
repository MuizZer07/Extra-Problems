
package Assignment;


public class MainTeacherStudent {
    public static void main(String[] args) {
        Teacher t = new Teacher("Muiz Ahmed","Dhaka,Bangladesh");
        
        t.addCourse("CSE215");
        t.addCourse("MAT130");
        t.addCourse("ECO101");
        t.removeCourse("CSE215");
        t.addCourse("CSE215");
        t.addCourse("CSE225");
        
        System.out.println("Teacher Details: "+t.toString()); 
        
        
        Student s = new Student("Muiz Ahmed","Uttara,Dhaka");
         
        s.addCourseGrade("CSE115", 4.00);
        s.addCourseGrade("CSE173", 2.70);
        s.addCourseGrade("CSE215", 4.00);
        s.addCourseGrade("CSE225", 3.50);
        
        System.out.println("\nStudent Details: "+s.toString());
        s.printGrades();
  
    }
}
