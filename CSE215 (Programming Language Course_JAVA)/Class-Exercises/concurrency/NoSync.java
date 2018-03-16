package concurrency;

//This program is not synchronized.

class Callme {	
	synchronized void call(String msg) {
		System.out.print("[" + msg);
		//Thread.yield(); 
		try {
			Thread.sleep(250);		
		} catch(InterruptedException e) {
			System.out.println("Interrupted");
		}
		System.out.println("]");
	}
}

class Caller implements Runnable {
	Callme tgt;
	String msg;
		
	public Caller(Callme target, String s) {		
		tgt = target;
		msg = s;
	}
		
	public void run() {	
		//synchronized (tgt) {
			tgt.call(msg);		
		//}
	}
}

class NoSync {
	public static void main(String args[]) {	
		Callme cm = new Callme();
		Callme cm2 = new Callme();
		Callme cm3 = new Callme();
		
		Caller c1 = new Caller(cm,"Hello");
		Thread t1 = new Thread(c1);
		
		Caller c2 = new Caller(cm,"Synchronized");
		Thread t2 = new Thread(c2);
		
		Caller c3 = new Caller(cm,"World");
		Thread t3 = new Thread(c3);
						
		//starting the threads
		t1.start();
		t2.start();
		t3.start();		
		//wait for threads to end
		try {
			t1.join();
			t2.join();
			t3.join();
		} catch(InterruptedException e) {
			System.out.println("Interrupted");
		}
	}
}