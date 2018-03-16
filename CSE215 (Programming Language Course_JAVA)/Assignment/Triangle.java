
package Assignment;

import static java.lang.Math.sqrt;


public class Triangle {
    int side1, side2, side3;
    
    Triangle(){
        
    }
    Triangle(int s1, int s2, int s3){
        side1=s1;
        side2=s2;
        side3=s3;
        
    }
    
    public double getArea(){
        double s = (side1+side2+side3)/2.0;
        double area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
        return area;
    }
    public double getPerimeter(){
        return (side1+side2+side3);
    }
}
