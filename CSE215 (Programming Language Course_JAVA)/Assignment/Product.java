
package Assignment;

public class Product {
    private int id;
    private String title;
    private double price;
    
Product(){ 
    this(0,"N/A",0);
}
Product(int id, String title, double price){
    this.id=id;
    this.title=title;
    this.price=price;
}
public int getID(){
    return id;
}
public String getTitle(){
    return title;
}
public double getPrice(){
    return price;
}
public void setID(int id){
    this.id=id;
}
public void setTitle(String title){
    this.title=title;
}
public void setPrice(double price){
    this.price=price;
}

}
