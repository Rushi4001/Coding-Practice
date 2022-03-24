
class calculation :
    
    def __init__(self,ino1,ino2):
        self.i=ino1
        self.j=ino2
        
    def sum(self):
        ans=self.i+self.j
        print("Sumetion is : " ,ans)
        
    def sub(self):
        ans=self.i-self.j
        print("subtraction is :" ,ans)
        
    def div(self):
        ans=self.i/self.j
        print("Division is :" , ans)
        
    def mult(self):
        ans=self.i*self.j
        print("Multiplication is :",ans)

def main():
    a=int(input("Enter first Number :"))
    b=int(input("Enter first Number :"))
    
    obj=calculation(a,b)
    

    obj.sum()
    obj.sub()
    obj.div()
    obj.mult()


if __name__ == "__main__":
    main()