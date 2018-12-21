class S
{
	void print()
	{	System.out.println("class S");	}
}
class R extends S
{
	void print()
	{	System.out.println("class R");	}
}
class C extends S
{
	void print()
	{	System.out.println("class C");	}
}
class T extends S
{
	void print()
	{	System.out.println("class T");	}
}
public class Exam3_20 
{
	static void methodl(S s)
	{	s.print();	}
	public static void main(String[] args) 
	{
		R r=new R();
		C c=new C();
		T t=new T();
		methodl(r);
		methodl(c);
		methodl(t);
	}
}
