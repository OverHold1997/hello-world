class people
{
	String name;
	int age;
	people(){}
	people(String name,int age)
	{
		this.name=name;
		this.age=age;
		System.out.println("In people");
	}
}
class student extends people
{
	String school;
	student()
	{
		this(null,0,null);
		System.out.println("In student1");
	}
	student(String name,int age,String school)
	{
		super(name,age);
		this.school=school;
		System.out.println("In student2");
	}
}
class graduate extends student
{
	graduate()
	{
		System.out.println("In gratude");
	}
}
class Exam3_16 
{
	public static void main(String[] args) 
	{
		people p=new graduate();
	}
}
