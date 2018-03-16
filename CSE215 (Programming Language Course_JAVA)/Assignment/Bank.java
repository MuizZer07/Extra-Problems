
package Assignment;

public class Bank extends Account1 {
   private Account1[] accounts;
    
Bank(int size){
   accounts = new Account1[size];
}
public Account1 getAccount(String number){
    int i;
    Account1 a = new Account1(number,"N/A",0.0);
    
    for(i=0;i<accounts.length;i++){
        if(accounts[i].getNum().equals(number)) break;
    }
    if(i==accounts.length) return a;
    else return accounts[i];
}
public void addAccount(Account1 accounts, int index){
   this.accounts[index]=accounts; 
}
}

