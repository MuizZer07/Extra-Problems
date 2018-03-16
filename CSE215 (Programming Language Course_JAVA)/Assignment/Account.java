
package Assignment;


public class Account {
    private String id, name;
    private int type;
    private double balance = 0.0;
    
    Account(){
        id = name = " ";
        type = 0;
        balance = 0.0;
    }
    Account(String id, String name, int type, double balance){
        this.id=id;
        this.name=name;
        this.type=type;
        this.balance=balance;
    }
    public String getID(){
        return id;
    }
    public String getName(){
        return name;
    }
    public int getType(){
        return type;
    }
    public double getBalance(){
        return balance;
    }
    
    public void setID(String id){
        this.id=id;
    }
    public void setName(String name){
        this.name=name;
    }
    public void setType(int type){
        this.type=type;
    }
    public void setBalance(double balance){
        this.balance=balance;
    }
    
    public boolean deposit(double amount){
        this.balance = this.balance + amount;
        return true;
    }
    
    public boolean withdraw(double amount){
        
        this.balance = this.balance - amount;
        if(this.balance>=0) return true;
        else return false;
    }
}
