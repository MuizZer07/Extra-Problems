
package Assignment;


public abstract class Animal {
    protected int legs;
    
protected Animal(int legs){
    this.legs=legs;
}
public abstract String walk();
public abstract String eat();

public String toString(){
    return "They have "+legs+" legs";
}
}
