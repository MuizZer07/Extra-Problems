
package Assignment;

public class MainAnimal {
    public static void main(String[] args) {
        Fish f = new Fish();
        Cat c = new Cat("Fluffy");
        Animal a = new Fish();
        Animal e = new Spider();
        Pet p = new Cat ();

        Fish f1;
        f1= (Fish)a;
        Spider s1;
        s1= (Spider)e;
        
        System.out.println(f.toString());
        System.out.println(c.toString());
        System.out.println(p.toString());
        System.out.println("\nPolymorphism: "+a.toString());
        System.out.println("Polymorphism: "+e.toString());
        System.out.println("Type Casting: "+f1.toString());
        System.out.println("Type Casting: "+s1.toString());
    }
}
