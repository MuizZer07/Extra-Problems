package concurrency;

//An incorrect implementation of a producer and consumer.
class Queue {
	int n;
	boolean valueSet = false;
	synchronized int get() {
		while (!valueSet) {
			try {
				wait();
			} catch (InterruptedException e) {				
			}
		}		
		System.out.println("Got: " + n);
		valueSet = false;
		notify();
		return n;
	}
	synchronized void put(int n) {
		while (valueSet) {
			try {
				wait();
			} catch (InterruptedException e) {			
			}
		}
		this.n = n;
		System.out.println("Put: " + n);
		valueSet = true;	
		notify();			
	}
}

class Producer implements Runnable {
	Queue q;
	Producer(Queue q) {
		this.q = q;		
	}
	public void run() {		
		for (int i=1; i<=20; i++) {
			q.put(i);				
		}
	}
}

class Consumer implements Runnable {
	Queue q;
	Consumer(Queue q) {
		this.q = q;		
	}
	public void run() {
		for (int i=1; i<=20; i++) {
			q.get();				
		}
	}
}

class InterThreadCom {
	public static void main(String args[]) {
		Queue q = new Queue();
		Thread t1 = new Thread(new Producer(q));
		Thread t2 = new Thread(new Consumer(q));
		t1.start();
		t2.start();
		try {
			t1.join();
			t2.join();
		} catch(InterruptedException e) {			
		}
		System.out.println("Press Control-C to stop.");
	}
}