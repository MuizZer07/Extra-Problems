
package Assignment;


public class Spider extends Animal{
    
public Spider(){
    super(8);
}
public String eat(){
    return "insects";
}
public String walk(){
    return "crab";   
}
public String toString(){
    return "Spiders eat "+eat()+". "+super.toString()+". They walk like "+walk()+".";
}

}
