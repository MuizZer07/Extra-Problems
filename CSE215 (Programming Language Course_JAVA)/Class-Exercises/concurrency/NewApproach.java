package concurrency;

class Task implements Runnable {
	String name;
	int n, st;
	Task() {}	
	Task(String s, int x, int sleepTime) {
		name = s;
		n = x;
		st = sleepTime;
	}	
	public void run()
	{
		int i = 1;		
		while (i<=n) {
			System.out.println("Task " + name + " is running: " + i);
			i = i + 1;			
			try {
				Thread.sleep(st);
			} catch (InterruptedException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
}

public class NewApproach {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Runnable a = new Task("A",10,100);
		Thread a1 = new Thread(a);
		a1.start();	
		
		Runnable b = new Task("B",15,300);
		Thread b1 = new Thread(b);
		b1.start();	
			
		try {
			a1.join();
			b1.join();
		} catch (InterruptedException e) {}
		
		System.out.println("Quiting from Main Thread");
	}

}
