class A
{
	int a,b;
	A()
	{
		a=b=0;
		System.out.println("in A()");
	}
	A(int i)
	{
		a=b=i;
		System.out.println("in A(int)");
	}
	A(int i,int j)
	{
		a=i;
		b=j;
		System.out.println("in A(int,int)");
	}
	void print()
	{	System.out.println("a="+a+",b="+b);	}
}
public class Exam3_21 
{
	public static void main(String[] args) 
	{
		A a1=new A();
		A a2=new A(5);
		A a3=new A(3,7);
		a1.print();
		a2.print();
		a3.print();
	}
}
