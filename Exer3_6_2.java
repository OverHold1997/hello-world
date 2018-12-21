class S
{
	double r;
	S(double i)
	{
		r=i;
	}
	double getr()
	{
		return r;
	}
}
class Circle extends S
{
	Circle(double i)
	{
		super(i);
	}
	double area()
	{
		return Math.PI*getr()*getr();
	}
}
public class Exer3_6_2 
{
	public static void main(String[] args) 
	{
		Circle c=new Circle(5);
		System.out.println(c.area());
	}
}
