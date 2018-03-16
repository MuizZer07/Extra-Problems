
package Assignment;

public class SalesLine extends Product{
    private Product product;
    private double quantity, subTotal;
    
SalesLine(){
     
}   
SalesLine(Product product, double quantity){
    this.product=product;
    this.quantity=quantity;
}
public Product getProduct(){
    return product;
}
public double getQuantity(){
    return quantity;
}
public double getSubTotal(){
    return subTotal;
}
public void setProduct(Product p){
    this.product=p;
}
public void setQuantity(double q){
    this.quantity=q;
}
public void setSubTotal(Product p){
     this.subTotal = quantity * p.getPrice();
}
}
