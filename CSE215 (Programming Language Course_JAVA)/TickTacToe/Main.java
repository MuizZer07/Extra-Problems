
package TickTacToe;
import java.util.Scanner;

public class Main {
    public static void Show(String[][] a){
        
        
        int i,j;
        for(i=0;i<a.length;i++){
          for(j=0;j<a[i].length;j++){
            System.out.print(a[i][j]+" ");
          }
          System.out.println();  
        }
    }
    public static String[][] input(String[][] a,int m){
        String c = "X";
       
    switch(m){
        case 1:
            if(a[0][0]=="-"){
            a[0][0]= c;
            }
            break;  
           
        case 2:
            if(a[0][1]=="-"){
            a[0][1]= c;
            }
            break;  
            
        case 3:
            if(a[0][2]=="-"){
            a[0][2]= c;
            }
            break;  
            
        case 4:
            if(a[1][0]=="-"){
            a[1][0]= c;
             }
            break;  
        case 5:
            if(a[1][1]=="-"){
            a[1][1]= c;
            }
            break; 
        case 6:
            if(a[1][2]=="-"){
            a[1][2]= c;
            } 
            break; 
        case 7:
            if(a[2][0]=="-"){
            a[2][0]= c;
            }
            break; 
        case 8:
            if(a[2][1]=="-"){
            a[2][1]= c;
             }
            break;
        case 9:
            if(a[2][2]=="-"){
            a[2][2]= c;
            }
            break;
    }    
     return a;     
    }
    public static void defaultGame(String[][] a){
         int i,j;
      for(i=0;i<a.length;i++){
          for(j=0;j<a[i].length;j++){
            a[i][j]="-";
          }
        }
    }
    public static int check(String[][] a){
        if(a[0][0].equals("X")&&a[0][1].equals("X")&&a[0][2].equals("X")) return 1;
        else if(a[0][0].equals("X")&&a[1][0].equals("X")&&a[2][0].equals("X")) return 1;
        else if(a[0][0].equals("X")&&a[1][1].equals("X")&&a[2][2].equals("X")) return 1;
        else if(a[0][1].equals("X")&&a[1][1].equals("X")&&a[2][1].equals("X")) return 1;
        else if(a[0][2].equals("X")&&a[1][2].equals("X")&&a[2][2].equals("X")) return 1;
        else if(a[0][2].equals("X")&&a[1][1].equals("X")&&a[2][0].equals("X")) return 1;
        else if(a[1][0].equals("X")&&a[1][1].equals("X")&&a[1][2].equals("X")) return 1;
        else if(a[2][0].equals("X")&&a[2][1].equals("X")&&a[2][2].equals("X")) return 1;
        else if(a[0][0].equals("O")&&a[0][1].equals("O")&&a[0][2].equals("O")) return 2;
        else if(a[0][0].equals("O")&&a[1][0].equals("O")&&a[2][0].equals("O")) return 2;
        else if(a[0][0].equals("O")&&a[1][1].equals("O")&&a[2][2].equals("O")) return 2;
        else if(a[0][1].equals("O")&&a[1][1].equals("O")&&a[2][1].equals("O")) return 2;
        else if(a[0][2].equals("O")&&a[1][2].equals("O")&&a[2][2].equals("O")) return 2;
        else if(a[0][2].equals("O")&&a[1][1].equals("O")&&a[2][0].equals("O")) return 2;
        else if(a[1][0].equals("O")&&a[1][1].equals("O")&&a[1][2].equals("O")) return 2;
        else if(a[2][0].equals("O")&&a[2][1].equals("O")&&a[2][2].equals("O")) return 2;
        else return 0;
    }  
    public static String[][] OP1(String[][] a){
        String s ="O";
        int ranI = (int) (1+ Math.random()*(3-1));
        int ranJ = (int) (1+ Math.random()*(3-1));
            
        if(a[0][0].equals("X")&&a[0][1].equals("X")&&a[0][2].equals("-")){
            a[0][2]= s;
        }
        else if(a[0][0].equals("O")&&a[0][1].equals("O")&&a[0][2].equals("-")){
            a[0][2]= s;
        } 
        else if(a[0][0].equals("X")&&a[0][2].equals("X")&&a[0][1].equals("-")){
            a[0][1]= s;
        }
        else if(a[0][0].equals("O")&&a[0][2].equals("O")&&a[0][1].equals("-")){
            a[0][1]= s;
        } 
        else if(a[0][2].equals("X")&&a[0][1].equals("X")&&a[0][0].equals("-")){
            a[0][0]= s;
        }
        else if(a[0][2].equals("O")&&a[0][1].equals("O")&&a[0][0].equals("-")){
            a[0][0]= s;
        } 
        
        
        else if(a[1][0].equals("X")&&a[2][0].equals("X")&&a[0][0].equals("-")){
            a[0][0]= s;
        } 
        else if(a[1][0].equals("O")&&a[2][0].equals("O")&&a[0][0].equals("-")){
            a[0][0]= s;
        }
        else if(a[0][0].equals("X")&&a[2][0].equals("X")&&a[1][0].equals("-")){
            a[1][0]= s;
        }
        else if(a[0][0].equals("O")&&a[2][0].equals("O")&&a[1][0].equals("-")){
            a[1][0]= s;
        }
        else if(a[0][0].equals("X")&&a[1][0].equals("X")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        else if(a[0][0].equals("O")&&a[1][0].equals("O")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        
        
        else if(a[0][0].equals("X")&&a[1][1].equals("X")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
         else if(a[0][0].equals("O")&&a[1][1].equals("O")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
         
        else if(a[2][2].equals("X")&&a[1][1].equals("X")&&a[0][0].equals("-")){
            a[0][0]= s;
        }
        else if(a[2][2].equals("O")&&a[1][1].equals("O")&&a[0][0].equals("-")){
            a[0][0]= s;
        }
        
        else if(a[0][0].equals("X")&&a[2][2].equals("X")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[0][0].equals("O")&&a[2][2].equals("O")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        
        
        else if(a[0][1].equals("X")&&a[1][1].equals("X")&&a[2][1].equals("-")){
            a[2][1]= s;
        }
        else if(a[0][1].equals("O")&&a[1][1].equals("O")&&a[2][1].equals("-")){
            a[2][1]= s;
        }
        else if(a[0][1].equals("X")&&a[2][1].equals("X")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[0][1].equals("O")&&a[2][1].equals("O")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[2][1].equals("X")&&a[1][1].equals("X")&&a[0][1].equals("-")){
            a[0][1]= s;
        }
        else if(a[2][1].equals("O")&&a[1][1].equals("O")&&a[0][1].equals("-")){
            a[0][1]= s;
        }
        
        
        
        else if(a[0][2].equals("X")&&a[1][2].equals("X")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
        else if(a[0][2].equals("O")&&a[1][2].equals("O")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
        else if(a[0][2].equals("X")&&a[2][2].equals("X")&&a[1][2].equals("-")){
            a[1][2]= s;
        }
        else if(a[0][2].equals("O")&&a[2][2].equals("O")&&a[1][2].equals("-")){
            a[1][2]= s;
        }
        else if(a[2][2].equals("X")&&a[1][2].equals("X")&&a[0][2].equals("-")){
            a[0][2]= s;
        }
        else if(a[2][2].equals("O")&&a[1][2].equals("O")&&a[0][2].equals("-")){
            a[0][2]= s;
        }
        
        
        else if(a[0][2].equals("X")&&a[1][1].equals("X")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        else if(a[0][2].equals("O")&&a[1][1].equals("O")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        else if(a[0][2].equals("X")&&a[2][0].equals("X")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[0][2].equals("O")&&a[2][0].equals("O")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[2][0].equals("X")&&a[1][1].equals("X")&&a[0][2].equals("-")){
            a[0][2]= s;
        }
        else if(a[2][0].equals("O")&&a[1][1].equals("O")&&a[0][2].equals("-")){
            a[0][2]= s;
        }
        
        
        else if(a[1][0].equals("X")&&a[1][1].equals("X")&&a[1][2].equals("-")){
            a[1][2]= s;
        }
        else if(a[1][0].equals("O")&&a[1][1].equals("O")&&a[1][2].equals("-")){
            a[1][2]= s;
        }
        else if(a[1][0].equals("O")&&a[1][2].equals("O")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[1][0].equals("X")&&a[1][2].equals("X")&&a[1][1].equals("-")){
            a[1][1]= s;
        }
        else if(a[1][2].equals("X")&&a[1][1].equals("X")&&a[1][0].equals("-")){
            a[1][0]= s;
        }
        else if(a[1][2].equals("O")&&a[1][1].equals("O")&&a[1][0].equals("-")){
            a[1][0]= s;
        }
        
        
        else if(a[2][0].equals("X")&&a[2][1].equals("X")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
         else if(a[2][0].equals("O")&&a[2][1].equals("O")&&a[2][2].equals("-")){
            a[2][2]= s;
        }
        else if(a[2][0].equals("X")&&a[2][2].equals("X")&&a[2][1].equals("-")){
            a[2][1]= s;
        }
         else if(a[2][0].equals("O")&&a[2][2].equals("O")&&a[2][1].equals("-")){
            a[2][1]= s;
        }
        else if(a[2][2].equals("X")&&a[2][1].equals("X")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        else if(a[2][2].equals("O")&&a[2][1].equals("O")&&a[2][0].equals("-")){
            a[2][0]= s;
        }
        
        
        else{
            if(a[ranI][ranJ].equals("-")) a[ranI][ranJ]=s;
            else {
                for(int i=0;a[ranI][ranJ]!="-";i++){
                  
                 ranI = (int) (1+ Math.random()*(3-1));
                 ranJ = (int) (1+ Math.random()*(3-1));
                 i++;
                 if(i==2)break;
             }a[ranI][ranJ]=s;
        }
        }
        return a;
        }
    
    
    public static void main(String[] args) {
        Scanner n = new Scanner(System.in);
        String[][] a = new String[3][3];
        defaultGame(a);
        int m;
        int i,j;
        Show(a);
        
        for(i=0;i<9;i++){
           
             System.out.println("Enter Any number between 1-9: ");
             m = n.nextInt(); 
             a= input(a,m);  
            
             int s = check(a);
            if(s!=0){
                if(s==1){
                 System.out.println("You Win!!");
                 i=1000;
                 break;
             }else if(s==2){
                 System.out.println("You Lose!!");
                 i=1000;
                 break;
             }else{
                 i=1000;
                 break;
             }  
             }
             
             
             
             a= OP1(a);
             Show(a);
            
             s = check(a);
             if(s!=0){
                if(s==1){
                 System.out.println("You Win!!");
                 i=1000;
                 break;
             }else if(s==2){
                 System.out.println("You Lose!!");
                 i=1000;
                 break;
             }else{
                 i=1000;
                 break;
             }  
             }
            
             
             
        }   
    }
}
