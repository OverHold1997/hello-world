class A
{
	int a=10;
	void printT()
	{	System.out.println("class A");	}
}
class B extends A
{
	int a='m';
	void printB()
	{
		super.printT();
		printT();
		System.out.println((char)a);
		System.out.println(super.a);
	}
	void printT()
	{	System.out.println("class B");	}
}
public class Exam3_18 
{
	public static void main(String[] args) 
	{
		B b=new B();
		b.printB();
	}
}
