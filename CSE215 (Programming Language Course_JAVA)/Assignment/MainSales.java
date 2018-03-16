
package Assignment;
import java.util.Scanner;

public class MainSales {
    public static void main(String[] args) {
        Scanner i = new Scanner (System.in);
        Scanner j = new Scanner (System.in);
        
        SalesLine s = new SalesLine();
        
        System.out.print("Enter Product ID: ");
        s.setID(i.nextInt());
        System.out.print("Title: ");
        s.setTitle(j.nextLine());
        System.out.print("Price: ");
        s.setPrice(i.nextDouble());
        System.out.print("Quantity: ");
        s.setQuantity(i.nextDouble());
      
        s.setSubTotal(s);
        System.out.println("Subtotal: "+s.getSubTotal());
    }
}
