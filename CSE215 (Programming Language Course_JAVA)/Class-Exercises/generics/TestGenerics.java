package generics;

class GenClass <T> {
	T ob;
	
	GenClass(T obj) {
		ob = obj;
	}
			
	public T getObj() {
		return ob;
	}
	
	public T Test(T a) {
		return a;
	}
	
	public String getName() {
		return ob.getClass().getName();
	}	
}

public class TestGenerics {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		GenClass<Integer> x = new GenClass<Integer>(12);	
		
		int i = x.getObj();		
		
		System.out.println(x.getName() + "   " + i);
		
		GenClass<Integer> z= new GenClass<Integer>(15);
		
		GenClass y = new GenClass(12);
		
		
		//GenClass<String> y = new GenClass<String>("Test");		
		//String s = y.getObj();		
		//System.out.println(y.getName() + "   " + s);	
		
	}

}
