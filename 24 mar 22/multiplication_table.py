
class multiplication_table :

    def __init__(self,a):
        self.i=a

    def table(self):
        
        for i in range(1,10):
            ans=self.i*i
            print(ans)



def main():
    x=int(input("Enter number"))
    obj=multiplication_table(x)
    obj.table()
    
if __name__ == "__main__":
    main()