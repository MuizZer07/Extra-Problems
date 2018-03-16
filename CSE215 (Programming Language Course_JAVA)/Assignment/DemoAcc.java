
package Assignment;
import java.util.Scanner;

public class DemoAcc {
    public static void main(String[] args) {
        Account a = new Account();
        Scanner s = new Scanner(System.in);
        Scanner p = new Scanner(System.in);
       
        
      
            System.out.println("Enter Account ID: ");
            a.setID(s.nextLine());
            System.out.println("Enter Name: ");
            a.setName(s.nextLine());
            System.out.println("Enter Account type:(1/2) ");
            a.setType(p.nextInt());
            
            System.out.println("Your initial balance: "+a.getBalance());
            System.out.println("Enter Diposit: ");
            a.deposit(p.nextDouble()); 
             
            System.out.println("Your current balance: "+a.getBalance());
            
            System.out.println("Enter withdraw amount: ");
            a.withdraw(p.nextDouble()); 
            
            if(a.getType()==1){
                if(a.getBalance()>=0) System.out.println("Your current balance: "+a.getBalance());
                else System.out.println("insufficient balance! ");
            }
            else if(a.getType()==2){
               if(a.getBalance()>=500) System.out.println("Your current balance: "+a.getBalance());
               else System.out.println("insufficient balance! ");
                    }
            else System.out.println("Invalid Account type! ");
    }
}
