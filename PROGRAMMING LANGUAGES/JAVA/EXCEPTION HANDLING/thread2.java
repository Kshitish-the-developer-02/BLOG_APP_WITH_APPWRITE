class thread2 extends Thread
{
 public void run()
{
for(int i=1;i<=10;i++)
 System.out.println("i*i is"+(i*i));
}
}