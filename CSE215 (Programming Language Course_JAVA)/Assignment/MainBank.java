
package Assignment;

import java.util.Scanner;
public class MainBank {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Scanner p = new Scanner(System.in);
        
        System.out.print("Enter total number of Accounts: ");
        int n = p.nextInt();
        
        Bank b =  new Bank(n);
        int i;
        
    for(i=0;i<n;i++){
        b.addAccount(b, i);
        
        System.out.print("\nEnter Account number: ");
        b.setNum(s.nextLine());
        System.out.print("Name: ");
        b.setName(s.nextLine());
        System.out.print("Balance: ");
        b.setBalance(p.nextDouble());     
    }
    
    for(i=0;i<n;i++){
        System.out.println("\nFind Account: (1)Yes (2)cancel");
        int j = p.nextInt();
        
    
      switch(j){
          case 1:
            System.out.print("Enter Account number:  ");
            Account1 a = b.getAccount(s.nextLine());
    
            System.out.println(a.toString()); 
            break;
          case 2:
            i=n+1;
            System.out.println("Cancelled. "); 
            break;
      }   
    }
     
    }
}
