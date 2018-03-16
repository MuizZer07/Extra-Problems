package imperatives;

import java.util.ArrayList;

public class Stack<T> {
	private ArrayList<T> list;
		
	public Stack() {		
		list = new ArrayList<T>();
	}
	
	boolean empty() {
		return list.isEmpty();
	}
	
	T peek() {
		if (!list.isEmpty()) return list.get(list.size()-1);
		return null;
	}
	
	int getSize() {
		return list.size();
	}
	
	public void push(T x) {
		list.add(x);				
	}
	
	public T pop() {
		if (!list.isEmpty()) {
			return list.remove(list.size()-1);
		} 
		return null;
	}

}
