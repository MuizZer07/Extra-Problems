
package Assignment;


public class Cat extends Animal implements Pet{
  private String name;
public Cat(String name){
    super(4);
    this.name=name;
}
public Cat(){
    super(4);
}
public void setName(String name){
    this.name=name;
}
public String getName(){
    return name; 
}
public String play(){
    return "mouse.";
}
public String eat(){
    return "fish";
}
public String walk(){
    return "tiger";
}
public String toString(){
    return "Cats eat "+eat()+". "+super.toString()+". They walk like "+walk()+". They play with "+play();
}


}
