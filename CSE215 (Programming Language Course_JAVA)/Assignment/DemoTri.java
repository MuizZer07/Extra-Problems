
package Assignment;

public class DemoTri {
    public static void main(String[] args) {
        Triangle t1= new Triangle();
        Triangle t2= new Triangle(8,9,10);
        
        System.out.println("Area of second triangle: "+t2.getArea());
        System.out.println("Perimeter of second triangle: "+t2.getPerimeter()); 
    }
}
