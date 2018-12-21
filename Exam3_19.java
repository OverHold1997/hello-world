class A
{
	void print()
	{	System.out.println("This is a superclass");	}
}
class B extends A
{
	void print()
	{
		System.out.println("This is a subclass");
		super.print();
	}
}
public class Exam3_19 
{
	public static void main(String[] args) 
	{
		A a=new A();
		a.print();
		B b=new B();
		b.print();
	}
}
