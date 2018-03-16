
package Assignment;

public class Fish extends Animal implements Pet{
 private String name;   
Fish(){
   super(0); 
}
public String getName(){
    return name; 
}
public void setName(String name){
    this.name=name;
}
public String play(){
    return "other fish.";
}
public String eat(){
    return "plant";
}
public String walk(){
    return "swim";
}
public String toString(){
    return "Fishes eat "+eat()+". They "+walk()+". They play with "+play();
}
}
