
package Assignment;


public class Student extends Person{
    private int numCourses;
    private String[] courses;
    private double grade;
    
Student(){
    super(" "," ");
    courses =new String[100];
}
    
Student(String name, String address){
    super(name,address);
    courses =new String[10];
}

public String toString(){
    return super.toString()+"\nCGPA: "+getAverageGrade();
}

public void addCourseGrade(String course,double grade){
    courses[numCourses]= course+"       "+grade;
    this.grade=this.grade+grade;
    numCourses++;
}

public void printGrades(){
    int i;
    System.out.println("\nCourse Name: Grade:");
    for(i=0;i<numCourses;i++){
       System.out.println(courses[i]);
    }  
}

public double getAverageGrade(){
    return grade/numCourses;
}
}
