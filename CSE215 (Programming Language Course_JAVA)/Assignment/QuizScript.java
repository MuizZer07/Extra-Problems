
package Assignment;


public class QuizScript {
    private String id;
    private double marks;
    private double total;
    private boolean haspassed;
    
    QuizScript(){
        id = "";
        total = marks = 0.0;
        haspassed = false;
    }
    QuizScript(String id, double total, double marks){
        this.id=id;
        this.total=total;
        this.marks=marks;
    }
    
    public String getID(){
        return id;
    }
    public double getTotal(){
        return total;
    }
    public double getMarks(){
        return marks;
    }
    public boolean getPass(){
        return haspassed;
    }
    public void setID(String id){
        this.id=id;
    }
    public void setTotal(double total){
        this.total=total;
    }
    public void setMarks(double marks){
        this.marks=marks;
    }
    
    public void setPass(boolean a){
        this.haspassed=a;
    }
    
    
    public void maxQuizScript(QuizScript[] q){
           int i;
           double max = 1;
           String s = " ";
           
           for(i=0;i<q.length;i++){
              if (q[i].getMarks()>max){
                  max=q[i].getMarks();
                  s= q[i].getID();
              } 
           }
           System.out.println("\nID:"+s+" Got highest.");
    }
    
    
    
}
