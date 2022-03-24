

class calculation
{
	constructor (no1,no2)
	{
		this.no1=no1;
		this.no2=no2;
	}
	
	sum()
	{
		var ans=0;
		ans=this.no1+this.no2
		console.log("Summetion is :" +ans);
	}
	
	sub()
	{
		var ans=0;
		ans=this.no1-this.no2
		console.log("Subtraction is :" +ans);
	}
	
	div()
	{
		var ans=0;
		ans=this.no1/this.no2
		console.log("division is :" +ans);
	}
	
	mult()
	{
		var ans=0;
		ans=this.no1*this.no2
		console.log("multiplication is :" +ans);
	}
}

const obj1 = new calculation(10,5);
const obj2 = new calculation(40,5);
obj1.sum();
obj1.sub();
obj1.div();
obj1.mult();

obj2.sum();
obj2.sub();
obj2.div();
obj2.mult();

