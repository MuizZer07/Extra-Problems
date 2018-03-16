
package Assignment;

public class Account1 {
    private String number,name;
    private double balance;
    
    Account1(){
        this("N/A","N/A",0.0);
    }
    Account1(String number, String name, double balance){
        this.number=number;
        this.name=name;
        this.balance=balance;
    }
    
    public String getNum(){
        return number;
    }
    public String getName(){
        return name;
    }
    public double getBalance(){
        return balance;            
    }
    public void setNum(String number){
        this.number=number;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setBalance(double balance){
        this.balance=balance;
    }
    public String toString(){
        return "\nAccount Details: \nAccount Number: "+number+"\nUser Name: "+name+"\nBalance: "+balance;
    } 
}
    
