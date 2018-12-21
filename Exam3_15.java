class A
{
	int a1=2;
	public int a2=4;
	public int a3=6;
	int geta3()
	{
		return a3;
	}
	void seta3(int i)
	{
		a3=i;
	}
}
class B extends A
{
	int b1=3;
}
class C extends B
{
	int c1=7;
	void methodl()
	{
		a1++;
		a2++;
		seta3(geta3()+1);
		b1++;
		c1++;
	}
}
public class Exam3_15 
{
	public static void main(String[] args) 
	{
		C c=new C();
		c.methodl();
		System.out.println(c.a1+","+c.a2+","+c.geta3()+","+c.b1+","+c.c1);
	}
}
