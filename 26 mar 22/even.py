

class even :

    def __init__(self,no):
        self.n=no
        
    def find_even(self):
        if(self.n%2==0):
            print("Given number is Even Number\n")
        else:
            print("Given number is not Even Number\n")


def main():
    no=int(input("Enter the Number\n"))
    obj = even(no)
    obj.find_even()


if __name__ == "__main__":
    main()