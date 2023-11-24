class thread1 extends Thread
{
 public void run()
{
 for(int i=1;i<=10;i++)
 System.out.println("i is"+i);
}
}

class demo
{
 public static void main(String[] s)
 {
  thread1 t1=new thread1();
  thread2 t2=new thread2();
   t1.setPriority(1);
   t2.setPriority(10); 
  t1.start();
 try
{
 t2.join();
}
catch(InterruptedException e)
{
}
  t2.start();
 System.out.println(t1.getPriority());
System.out.println(t2.getPriority());


}
}
