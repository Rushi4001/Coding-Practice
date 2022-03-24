
class multiplication_table
{
	
	constructor(no)
	{
		this.no=no
	}
	
	table()
	{
		var ans;
		for(var i=1;i<=10;i++)
		{
			ans=this.no*i;
			console.log(ans);
		}
		
	}
	
}

const obj1 = new multiplication_table(5);

const obj2 = new multiplication_table(7);

obj1.table();
obj2.table();











