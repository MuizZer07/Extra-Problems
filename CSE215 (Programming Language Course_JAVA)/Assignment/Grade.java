
package Assignment;


public class Grade {
    private String ID;
    private double percentage;
    
    static int numOfStudents;
    
    Grade(){
        ID = "";
        percentage =  0.0;
        numOfStudents++;
    }
    
    Grade(String ID,double percentage){
        this.ID=ID;
        this.percentage=percentage;
        numOfStudents++;
    }
    
    public String getID(){
        return ID;
    }
    public double getPercentage(){
        return percentage;
    }
    
    public void setID(String ID){
        this.ID=ID;
    }
    public void setPercentage(double percentage){
        this.percentage=percentage;
    }
    
    public String CalculateGrade(){
        String grade;
        
        if(percentage>=93) grade = "A";
        else if (percentage<93&&percentage>=89) grade = "A-";
        else if (percentage<89&&percentage>=87) grade = "B+";
        else if (percentage<87&&percentage>=84) grade = "B";
        else if (percentage<84&&percentage>=80) grade = "B-";
        else if (percentage<80&&percentage>=77) grade = "C+";
        else if (percentage<77&&percentage>=74) grade = "C";
        else if (percentage<74&&percentage>=70) grade = "C-";
        else if (percentage<70&&percentage>=67) grade = "D+";
        else if (percentage<67&&percentage>=64) grade = "D";
        else if (percentage<64&&percentage>=60) grade = "D-";
        else grade = "F";
        
       return grade;
    }
}
