
package Assignment;


public class Teacher extends Person {
    private int numCourses;
    private String[] courses;
    
Teacher(){
    super(" "," ");
    courses=new String[100];
}
    
Teacher(String name, String address){
    super(name,address);
    courses =new String[10];
}

public String toString(){
    int i;
    String s="";
    for(i=0;i<numCourses;i++){
       s = s+"\n"+courses[i];
    }
    return  super.toString()+"\nRegarding Courses: ("+numCourses+")"+s;
}

public boolean addCourse(String course){
    int i;
    
    for(i=0;i<numCourses;i++){
        boolean a = courses[i].equals(course);
        if(a==true)  break;
    }
    if(i==numCourses){
    courses[numCourses]= course;
    numCourses++; 
    return true;
}
    else{
    return false;
    }        
    
}
public boolean removeCourse(String course){
    int i;
    
    for(i=0;i<numCourses;i++){
        boolean a = courses[i].equals(course);
        if(a==true)  break;
    }
    if(i==numCourses) return false;
    else{
        numCourses= numCourses-1;
        for(;i<numCourses;i++){
            courses[i]=courses[i+1];
        }
       
        return true;
    }
}

}
