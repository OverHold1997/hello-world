class B
{
	void meth(int i)
	{
		System.out.println("Int: "+i);
	}
	void meth(double i)
	{
		System.out.println("Double: "+i);
	}
}
public class Exer3_2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int i=8;
		double d=6.8;
		short s=10;
		float f=5.3f;
		byte b=9;
		char c='a';
		B ob=new B();
		ob.meth(i);
		ob.meth(d);
		ob.meth(s);
		ob.meth((int)f);
		ob.meth(b);
		ob.meth(c);
	}

}
